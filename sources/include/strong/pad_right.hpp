#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_PAD_RIGHT_HPP
#define STRONG_PAD_RIGHT_HPP

#include <string>
#include <string_view>

namespace strong {
/**
 * Pad right
 *
 * @param content
 * @param length
 * @param pad
 * @return std::string
 */
std::string pad_right(std::string_view content, std::size_t length, char pad);
}  // namespace strong

#endif
