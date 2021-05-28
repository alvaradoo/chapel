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

#include "chpl/uast/StringLiteral.h"

#include "chpl/uast/Builder.h"

#include <cstdlib>

namespace chpl {
namespace uast {


bool StringLiteral::contentsMatchInner(const ASTNode* other) const {
  const StringLiteral* lhs = this;
  const StringLiteral* rhs = (const StringLiteral*) other;
  return lhs->literalContentsMatchInner(rhs) &&
         lhs->value_ == rhs->value_ &&
         lhs->quotes_ == rhs->quotes_;
}
void StringLiteral::markUniqueStringsInner(Context* context) const {
  literalMarkUniqueStringsInner(context);
}

owned<StringLiteral> StringLiteral::build(Builder* builder, Location loc,
                                          std::string value,
                                          StringLiteral::QuoteStyle quotes) {
  StringLiteral* ret = new StringLiteral(std::move(value), quotes);
  builder->noteLocation(ret, loc);
  return toOwned(ret);
}


} // namespace uast
} // namespace chpl
