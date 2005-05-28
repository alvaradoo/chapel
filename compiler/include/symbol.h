#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include "alist.h"
#include "baseAST.h"
#include "analysis.h"
#include "pragma.h"
#include "type.h"

class DefExpr;
class Stmt;
class BlockStmt;
class ASymbol;
class SymScope;
class MPosition;

enum varType {
  VAR_NORMAL,
  VAR_REF,
  VAR_CONFIG,
  VAR_STATE
};

enum consType {
  VAR_VAR,
  VAR_CONST,
  VAR_PARAM
};

class Symbol : public BaseAST {
 public:
  char* name;
  char* cname; // Name of symbol for generating C code
  Type* type;
  bool exportMe;
  bool isDead;
  bool keepLive;
  DefExpr* defPoint; // Point of definition
  AList<Pragma> *pragmas;


  SymScope* parentScope;  // Scope in which the symbol was defined
  ASymbol *asymbol;
  Symbol* overload; // Overloading (functions only, FnSymbol/ForwardingSymbol)

  Symbol(astType_t astType = SYMBOL, char* init_name = NULL, 
         Type* init_type = dtUnknown, bool init_exportMe = true);
  void setParentScope(SymScope* init_parentScope);

  Symbol* copy(bool clone = false, Map<BaseAST*,BaseAST*>* map = NULL);
  Symbol* copyInternal(bool clone = false, Map<BaseAST*,BaseAST*>* map = NULL);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);

  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverse(Traversal* traversal, bool atTop = true);
  virtual void traverseDef(Traversal* traversal, bool atTop = true);
  virtual void traverseSymbol(Traversal* traverse);
  virtual void traverseDefSymbol(Traversal* traverse);

  virtual bool isConst(void);
  virtual bool isParam(void);
  bool isThis(void);

  void print(FILE* outfile);
  virtual void printDef(FILE* outfile);
  virtual void codegen(FILE* outfile);
  virtual void codegenDef(FILE* outfile);
  virtual void codegenPrototype(FILE* outfile);
  void setDefPoint(DefExpr* init_defPoint);
  template <class elemType>
  static void setDefPoints(AList<elemType>* symList, DefExpr* init_defPoint);
  virtual FnSymbol* getFnSymbol(void);
  virtual Type* typeInfo(void);
  bool hasPragma(char* str);
  void addPragma(char* str);
};
#define forv_Symbol(_p, _v) forv_Vec(Symbol, _p, _v)


class UnresolvedSymbol : public Symbol {
 public:
  UnresolvedSymbol(char* init_name, char* init_cname = NULL);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);

  virtual void traverseDefSymbol(Traversal* traverse);

  void codegen(FILE* outfile);
};


class VarSymbol : public Symbol {
 public:
  varType varClass;
  consType consClass;
  Type *aspect;                 // the Type to dispatch to (e.g. "super" or for nil default args)
  bool noDefaultInit;

  //changed isconstant flag to reflect var, const, param: 0, 1, 2
  VarSymbol(char* init_name = NULL, Type* init_type = dtUnknown,
            varType init_varClass = VAR_NORMAL, 
            consType init_consClass = VAR_VAR);
            
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);

  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);

  bool initializable(void);
  bool isConst(void);
  //Roxana
  bool isParam(void);

  virtual void codegenDef(FILE* outfile);

  void printDef(FILE* outfile);
};


class ParamSymbol : public Symbol {
 public:
  paramType intent;
  Expr* init;
  TypeSymbol *typeVariable;
  bool isGeneric;

  ParamSymbol(paramType init_intent = PARAM_BLANK, char* init_name = NULL, 
              Type* init_type = dtUnknown, Expr* init_init = NULL);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);

  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);

  bool requiresCPtr(void);
  bool requiresCopyBack(void);
  bool requiresCTmp(void);
  bool isConst(void);

  void printDef(FILE* outfile);
  void codegen(FILE* outfile);
  void codegenDef(FILE* outfile);
};


class TypeSymbol : public Symbol {
 public:
  TypeSymbol(char* init_name, Type* init_definition);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);
  TypeSymbol* clone(Map<BaseAST*,BaseAST*>* map);
  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);
  virtual void codegenDef(FILE* outfile);
  virtual void codegenPrototype(FILE* outfile);

  static TypeSymbol* lookupOrDefineTupleTypeSymbol(Vec<Type*>* components);
};


typedef enum __method_type {
  NON_METHOD,
  PRIMARY_METHOD,
  SECONDARY_METHOD
} _method_type;

class FnSymbol : public Symbol {
 public:
  AList<ParamSymbol>* formals;
  Type* retType;
  Symbol* _this;
  VarSymbol* _setter; /* the variable this function sets if it is a setter */
  VarSymbol* _getter; /* the variable this function gets if it is a getter */
  BlockStmt* body;
  Symbol* typeBinding;
  _method_type method_type;
  SymScope* paramScope;
  bool isConstructor;
  bool retRef;

  FnSymbol(char* init_name, AList<ParamSymbol>* init_formals, Type* init_retType,
           BlockStmt* init_body, bool init_exportMe=true,
           Symbol* init_typeBinding = NULL);
  FnSymbol(char* init_name, Symbol* init_typeBinding = NULL);
  void continueDef(AList<ParamSymbol>* init_formals, Type* init_retType, bool isRef);
  void finishDef(BlockStmt* init_body, SymScope* init_paramScope, 
                 bool init_exportMe=true);
  virtual FnSymbol* getFnSymbol(void);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);
  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);

  FnSymbol* clone(Map<BaseAST*,BaseAST*>* map);
  FnSymbol* order_wrapper(Map<Symbol *, Symbol *> *formals_to_actuals);
  FnSymbol* coercion_wrapper(Map<Symbol *, Symbol *> *coercion_substitutions);
  FnSymbol* default_wrapper(Vec<Symbol *> *defaults);
  FnSymbol* instantiate_generic(Map<BaseAST*,BaseAST*>* copyMap,
                                Map<Type*,Type*>* generic_substitutions);

  void codegenHeader(FILE* outfile);
  void codegenDef(FILE* outfile);

  void printDef(FILE* outfile);

  static FnSymbol* mainFn;
  static void init(void);
};


class EnumSymbol : public Symbol {
 public:
  Expr* init;
  int val;

  EnumSymbol(char* init_name = NULL, Expr* init_init = NULL, int init_val = 0);
  virtual Symbol* copySymbol(bool clone, Map<BaseAST*,BaseAST*>* map);
  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);
  static void setValues(AList<EnumSymbol>* symList);
  void codegenDef(FILE* outfile);
};


enum modType {
  MOD_INTERNAL, // intrinsic, internal prelude, prelude (no codegen)
  MOD_STANDARD, // standard modules require codegen, e.g., _chpl_complex
  MOD_COMMON,   // a module above the scope of the user modules (codegen)
  MOD_USER,
  MOD_SENTINEL  // used only for AList heads/tails
};


class ModuleSymbol : public Symbol {
 public:
  modType modtype;
  AList<Stmt>* stmts;
  FnSymbol* initFn;

  SymScope* modScope;

  Vec<ModuleSymbol*> uses;
  Vec<SymScope*> usedBy;   // list of SymScopes that use this module

  ModuleSymbol(char* init_name = NULL, modType init_modtype = MOD_SENTINEL);
  void setModScope(SymScope* init_modScope);
  virtual void replaceChild(BaseAST* old_ast, BaseAST* new_ast);
  virtual void traverseDefSymbol(Traversal* traverse);
  void startTraversal(Traversal* traversal);

  void codegenDef(void);
  void createInitFn(void);
  bool isFileModule(void);
};


class ForwardingSymbol : public Symbol {
 public:
  Symbol* forward;
  bool renamed;
  ForwardingSymbol(Symbol* init_forward, char* rename = NULL);
  virtual void codegenDef(FILE* outfile);
  virtual FnSymbol* getFnSymbol(void);
  virtual Type* typeInfo(void);
};


class LabelSymbol : public Symbol {
 public:
  LabelSymbol(char* init_name);
  virtual void codegenDef(FILE* outfile);
};

extern Symbol *gNil;


template <class elemType>
void Symbol::setDefPoints(AList<elemType>* symList, DefExpr* init_defPoint) {
  Symbol* tmp = symList->first();
  while (tmp) {
    tmp->setDefPoint(init_defPoint);
    tmp = symList->next();
  }
}

#endif
