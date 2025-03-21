#include <strong/after.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong {
std::optional<unsigned char> char_at(const std::string_view content,
                                     const std::size_t at) {
  if (at >= content.size()) {
    return std::nullopt;
  }

  return content[at];
}
}  // namespace strong
