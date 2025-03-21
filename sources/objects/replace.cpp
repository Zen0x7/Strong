#include <strong/replace.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong {
std::string replace(const std::string_view content, const std::string_view find,
                    const std::string_view with) {
  std::string result{content};
  if (find.empty() || content.find(find) == std::string_view::npos) {
    return result;
  }

  size_t pos = 0;
  while ((pos = result.find(find, pos)) != std::string::npos) {
    result.replace(pos, find.size(), with);
    pos += with.size();
  }

  return result;
}
}  // namespace strong
