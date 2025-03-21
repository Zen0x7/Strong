#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_PAD_LEFT_HPP
#define STRONG_PAD_LEFT_HPP

#include <string>
#include <string_view>

namespace strong {
/**
 * Retrieves a left padded string.
 *
 * @param content The string that will be used.
 * @param length The length of final string.
 * @param pad The character used as pad.
 * @return The padded string. If the length used is smaller than the content
 * then returns the content.
 */
std::string pad_left(std::string_view content, std::size_t length, char pad);
}  // namespace strong

#endif
