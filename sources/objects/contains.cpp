#include <strong/after.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong {
bool contains(const std::string_view content, const std::string_view search) {
  return content.contains(search);
}
}  // namespace strong
