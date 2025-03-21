#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_ENDS_WITH_HPP
#define STRONG_ENDS_WITH_HPP

#include <string_view>

namespace strong
{
/**
 * Determines if a string ends with something.
 *
 * @param content The string that will be used.
 * @param search The string that will be searched.
 * @return The boolean result.
 */
bool ends_with(std::string_view content, std::string_view search);
} // namespace strong

#endif
