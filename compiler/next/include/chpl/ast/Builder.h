/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CHPL_AST_BUILDER_H
#define CHPL_AST_BUILDER_H

#include "chpl/ast/ASTBase.h"
#include "chpl/ast/UniqueString.h"

#include <vector>
#include <unordered_map>
#include <utility>

namespace chpl {

class Context;

namespace uast {

class ErrorMessage;
class Exp;
class Location;

/**
  This class helps to build AST. It should only build AST
  from one file at a time.
 */
class Builder final {
 private:
  using pathVecT = std::vector<std::pair<UniqueString,int>>;
  using declaredHereT = std::unordered_map<UniqueString,int>;

  Context* context_;
  UniqueString filepath_;
  UniqueString inferredModuleName_;
  ASTList topLevelExps_;
  std::vector<ErrorMessage> errors_;
  std::vector<std::pair<ID, Location>> locations_;

  Builder(Context* context,
          UniqueString filepath, UniqueString inferredModuleName);
  UniqueString createImplicitModuleIfNeeded();
  void assignIDs(UniqueString inferredModule);
  void doAssignIDs(ASTBase* ast, UniqueString symbolPath, int& i,
                   pathVecT& pathVec, declaredHereT& duplicates);

 public:
  static owned<Builder> build(Context* context, const char* filepath);

  Context* context() const { return context_; }

  /**
    Save a toplevel expression in to the builder.
    This is called by the parser.
   */
  void addToplevelExp(owned<Exp> e);

  /**
    Save an error.
   */
  void addError(ErrorMessage);

  /**
    Record the location of an AST element.
   */
  void noteLocation(ASTBase* ast, Location loc);

  /**
    This struct records the result of building some AST.
   */
  struct Result final {
    uast::ASTList topLevelExps;
    std::vector<ErrorMessage> errors;
    std::vector<std::pair<ID, Location>> locations;

    Result();
    Result(Result&&) = default; // move-constructable
    Result(const Result&) = delete; // not copy-constructable
    Result& operator=(const Result&) = delete; // not assignable

    static bool update(Result& keep, Result& addin);
    static void mark(Context* context, const Result& keep);
  };

  /**
    Assign IDs to all of the AST elements added as toplevel expressions
    to this builder and return the result. This function clears
    these elements from the builder and it becomes empty.
   */
  Builder::Result result();

  // For complex declarations, the builder supports
  //  enter/setBla/addBla/exit e.g. enterFnSymbol
  //  enterDecl/exitDecl
  // Parsing is easier if the name does not need to be set by the enter call.

  // Builder methods are actually type methods on the individual AST
  // elements. This prevents the Builder API from growing unreasonably large.
};

} // end namespace uast

// docs are turned off for this as a workaround for breathe errors
/// \cond DO_NOT_DOCUMENT
template<> struct update<chpl::uast::Builder::Result> {
  bool operator()(chpl::uast::Builder::Result& keep,
                  chpl::uast::Builder::Result& addin) const {
    return chpl::uast::Builder::Result::update(keep, addin);
  }
};
template<> struct mark<chpl::uast::Builder::Result> {
  void operator()(Context* context,
                  const chpl::uast::Builder::Result& keep) const {
    printf("IN BUILDER RESULT MARK\n");
    chpl::uast::Builder::Result::mark(context, keep);
  }
};
/// \endcond

} // end namespace chpl


#endif
