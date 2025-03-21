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
 * Pad left
 *
 * @param content
 * @param length
 * @param pad
 * @return std::string
 */
std::string pad_left(std::string_view content, std::size_t length, char pad);
}  // namespace strong

#endif
