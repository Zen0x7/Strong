#include <strong/is.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <regex>

namespace strong {
bool is(const std::string_view content, const std::string_view expression) {
  try {
    const std::regex pattern(expression.begin(), expression.end());
    return std::regex_match(content.begin(), content.end(), pattern);
  } catch (const std::regex_error& e) {
    return false;
  }
}
}  // namespace strong
