#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_BETWEEN_HPP
#define STRONG_BETWEEN_HPP

#include <optional>
#include <string_view>

namespace strong {
/**
 * Between
 *
 * @param content
 * @param begin
 * @param end
 * @return std::optional<std::string_view>
 */
std::optional<std::string_view> between(std::string_view content,
                                        std::string_view begin,
                                        std::string_view end);
}  // namespace strong

#endif
