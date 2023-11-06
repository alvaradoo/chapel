module cholesky_test_unsymmetric_ranges {

  // +------------------------------------------------------------------------+
  // |  TEST DRIVER FOR VARIATIONS ON DENSE SYMMETRIC CHOLESKY FACTORIZATION  |
  // +------------------------------------------------------------------------+
  // |  Special Driver to test changes needed to standard elemental Cholesky  |
  // |  factorization code to explicitly code for unequal (unsymmetric)       |
  // |  unstrided ranges in the input matrix.                                 |
  // |                                                                        |
  // |  This version expects A to be a square symmetric positive definite     |
  // |  matrix with unequal, but unstrided, row and column indices.           |
  // +------------------------------------------------------------------------+

  use Random;

  use CyclicDist, Time;

  use cholesky_execution_config_consts;

  use elemental_cholesky_unsymmetric_index_ranges,
      elemental_cholesky_symmetric_index_ranges;

  proc main {

    var Rand = new randomStream ( real, seed = 314159, parSafe = false) ;

    const MatIdx = { index_base .. #n, index_base .. #n };

    const mat_dom : domain (2) dmapped cyclicDist ( startIdx = MatIdx.low )
      = MatIdx;

    const Unsymm_MatIdx = MatIdx.translate (row_offset, col_offset);

    const unsymm_mat_dom : domain (2) 
          dmapped cyclicDist ( startIdx = Unsymm_MatIdx.low ) = Unsymm_MatIdx;
    const distribution_type = "cyclic";

    var A : [mat_dom] real,
        B : [mat_dom] real,
        L : [mat_dom] real;

    var C : [unsymm_mat_dom] real;

    var positive_definite : bool;

    writeln ("Cholesky Factorization Tests for Unequal Index Ranges");
    writeln ("   Matrix Dimension  : ", n);
    writeln ("   Block Size        : ", block_size);
    writeln ("   Indexing Base     : ", index_base);
    writeln ("   Array distribution: ", distribution_type );
    writeln ("");
    writeln ("Parallel Environment");
    writeln ("   Number of Locales         : ", numLocales );
    if !reproducible_output then {
      writeln ("   Number of cores per locale: ", Locales.numPUs() );
      writeln ("   Max tasking parallelism   : ", Locales.maxTaskPar );
    }

    // ---------------------------------------------------------------
    // create a test problem, starting with a random general matrix B.
    // ---------------------------------------------------------------

    Rand.fill (B);

    // -------------------------------------------------------------
    // create a positive definite matrix A by setting A equal to the
    // matrix-matrix product B B^T.  This normal equations matrix is 
    // positive-definite as long as B is full rank.
    // -------------------------------------------------------------

    A = 0.0;

    forall (i,j) in mat_dom with (ref A) do
      A (i,j) = + reduce (  [k in mat_dom.dim (0) ] 
    			    B (i, k) * B (j, k) );

    // factorization algorithms overwrite a copy of A, leaving
    // the factor L in its place

    L = A;

    if print_matrix_details then {
      writeln ("test matrix");
      print_lower_triangle ( L );
    }

    var clock : stopwatch;
          
    writeln ("\n\n");
    writeln ("elemental cholesky factorization symmetric index range code\n " + 
	     "on symmetric index range");

    clock.clear ();
    clock.start ();

    positive_definite = elemental_cholesky_symmetric_index_ranges ( L );

    clock.stop ();
    if !reproducible_output then {
      writeln ( "Cholesky Factorization time:    ", clock.elapsed () );
      writeln ( " collective speed in megaflops: ", 
		( (n**3) / 3.0 )  / (10.0**6 * clock.elapsed () ) );
    }

    print_lower_triangle ( L );

    if positive_definite then
      check_factorization ( A, L );
    else
      writeln ("factorization failed for non-positive semi-definite matrix");

    L = A;

    writeln ("\n\n");
    writeln ("elemental cholesky factorization unsymmetric index range code\n "
	     +	"on symmetric index range");

    clock.clear ();
    clock.start ();

    positive_definite = elemental_cholesky_unsymmetric_index_ranges ( L );

    clock.stop ();
    if !reproducible_output then {
      writeln ( "Cholesky Factorization time:    ", clock.elapsed () );
      writeln ( " collective speed in megaflops: ", 
		( (n**3) / 3.0 )  / (10.0**6 * clock.elapsed () ) );
    }
          
    print_lower_triangle ( L );

    if positive_definite then
      check_factorization ( A, L );
    else
      writeln ("factorization failed for non-positive semi-definite matrix");

    writeln ("\n\n");
    writeln ("elemental cholesky factorization unsymmetric index range code\n "
	     +	"on unsymmetric index range");
           
    C = A;
          
    print_lower_triangle ( C );
          
    clock.clear ();
    clock.start ();

    positive_definite = elemental_cholesky_unsymmetric_index_ranges ( C );
          
    clock.stop ();
    if !reproducible_output then {
      writeln ( "Cholesky Factorization time:    ", clock.elapsed () );
      writeln ( " collective speed in megaflops: ", 
		( (n**3) / 3.0 )  / (10.0**6 * clock.elapsed () ) );
    }

    print_lower_triangle ( C );
          
    L = C;
    print_lower_triangle ( L );
          
    if positive_definite then
      check_factorization ( A, L );
    else
      writeln ("factorization failed for non-positive semi-definite matrix");

    writeln ("\n\n");
    writeln ("elemental cholesky factorization symmetric index range code\n " + 
	     "on unsymmetric index range via alias");
          
    clock.clear ();
    clock.start ();

    C = A;
          
    print_lower_triangle ( C );

    ref C_reindex = C.reindex(0..#n, 0..#n);
          
    positive_definite = 
      elemental_cholesky_symmetric_index_ranges ( C_reindex );
          
    clock.stop ();
    if !reproducible_output then {
      writeln ( "Cholesky Factorization time:    ", clock.elapsed () );
      writeln ( " collective speed in megaflops: ", 
		( (n**3) / 3.0 )  / (10.0**6 * clock.elapsed () ) );
    }

    print_lower_triangle ( C );
          
    L = C;
    print_lower_triangle ( L );
          
    if positive_definite then
      check_factorization ( A, L );
    else
      writeln ("factorization failed for non-positive semi-definite matrix");
  }


  proc check_factorization ( A : [], L : [] )

    // -----------------------------------------------------------------------
    // Check the factorization by forming L L^T and comparing the result to A.
    // The factorization is successful if the results are within the
    // point-wise perturbation bounds of Demmel, given as Theorem 10.5 in
    // Higham's "Accuracy and Stability of Numerical Algorithms, 2nd Ed."
    // -----------------------------------------------------------------------

    where ( A.domain.rank == 2 ) {

    assert ( A.domain.dim (0) == A.domain.dim (1)  &&
	     L.domain.dim (0) == A.domain.dim (0)  &&
	     L.domain.dim (1) == A.domain.dim (1) 
	     );
    
    const mat_dom  = A.domain,
          mat_rows = A.domain.dim(0),
          n        = A.domain.dim(0).size;

    const unit_roundoff = 2.0 ** (-53), // IEEE 64 bit floating point
          gamma_n1      = (n * unit_roundoff) / (1.0 - n * unit_roundoff);

    var   max_ratio = 0.0;

    var   d : [mat_rows] real;

    for i in mat_rows do
      d (i) = sqrt ( A (i,i) );
    
    forall (i,j) in mat_dom with (ref max_ratio) do { // race
      const resid: real =
               abs (A (i,j) - 
		    + reduce ( [k in mat_dom.dim(0) (..min (i,j))]
			       L (i,k) * L (j,k) ) ) ;
      max_ratio = max ( max_ratio,
			resid * (1 - gamma_n1) /
			( gamma_n1 * d (i) * d (j) ) );
    }

    if max_ratio <= 1.0 then
      writeln ("factorization successful");
    else
      writeln ("factorization error exceeds bound by ratio:", max_ratio);
  }


  proc print_lower_triangle ( L : [] ) {
   
    if print_matrix_details then
      for (i_row, i_col) in zip( L.domain.dim(0), L.domain.dim(1) ) do
	writeln (i_row, ":  ", L(i_row, ..i_col) );
  }

}
    
