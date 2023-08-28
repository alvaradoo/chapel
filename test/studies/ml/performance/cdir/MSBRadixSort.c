#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
/* Sort.chpl:3273 */
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
static void chpl__init_MSBRadixSort(int64_t _ln_chpl,
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
                                    int32_t _fn_chpl) {
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  if (chpl__init_MSBRadixSort_p) /* ZLINE: 3273 /Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl */
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  {
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    goto _exit_chpl__init_MSBRadixSort_chpl;
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  }
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  printModuleInit_chpl("%*s\n", "MSBRadixSort", INT64(12), _ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  refIndentLevel_chpl = &moduleInitLevel_chpl;
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  chpl__init_MSBRadixSort_p = UINT8(true);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  {
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    chpl__init_Sort(_ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    chpl__init_Sort(_ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    chpl__init_RadixSortHelp(_ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    chpl__init_POSIX(_ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
    chpl__init_ShellSort(_ln_chpl, _fn_chpl);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  }
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  _exit_chpl__init_MSBRadixSort_chpl:;
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
  return;
#line 3273 "/Users/iainmoncrief/Documents/chapel/modules/packages/Sort.chpl"
}

