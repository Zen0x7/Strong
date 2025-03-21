#include <strong/before_last.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong {
std::optional<std::string_view> before_last(const std::string_view content,
                                            const std::string_view search) {
  std::size_t pos = content.find(search);
  if (pos == std::string_view::npos) return std::nullopt;
  std::size_t aux = pos;
  while (pos != std::string_view::npos) {
    aux = pos;
    pos = content.find(search, pos + search.size());
  }
  return content.substr(0, aux);
}
}  // namespace strong
