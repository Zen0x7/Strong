#include <strong/between.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong {
std::optional<std::string_view> between(std::string_view content,
                                        const std::string_view begin,
                                        const std::string_view end) {
  const std::size_t begin_pos = content.find(begin);
  if (begin_pos == std::string_view::npos) return std::nullopt;

  const std::size_t end_pos = content.find(end, begin_pos + begin.size());
  if (end_pos == std::string_view::npos) return std::nullopt;

  return content.substr(begin_pos + begin.size(),
                        end_pos - begin_pos - begin.size());
}
}  // namespace strong
