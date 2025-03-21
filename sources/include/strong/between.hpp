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
 * Retrieves the string portion between two strings.
 *
 * @param content The string that will be used.
 * @param begin The start portion that will be searched.
 * @param end The finish portion that will be searched.
 * @return The optional string.
 */
std::optional<std::string_view> between(std::string_view content,
                                        std::string_view begin,
                                        std::string_view end);
}  // namespace strong

#endif
