#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_CHAR_AT_HPP
#define STRONG_CHAR_AT_HPP

#include <optional>
#include <string_view>

namespace strong {
/**
 * Char at
 *
 * @param content
 * @param at
 * @return std::optional<unsigned char>
 */
std::optional<unsigned char> char_at(std::string_view content, std::size_t at);
}  // namespace strong

#endif
