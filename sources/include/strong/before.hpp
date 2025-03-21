#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_BEFORE_HPP
#define STRONG_BEFORE_HPP

#include <optional>
#include <string_view>

namespace strong
{
/**
 * Retrieves the string portion before something.
 *
 * @param content The string that will be used.
 * @param search The string that will be searched.
 * @return The optional string.
 */
std::optional<std::string_view> before(std::string_view content, std::string_view search);
} // namespace strong

#endif
