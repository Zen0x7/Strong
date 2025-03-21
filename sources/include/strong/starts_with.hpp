#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_STARTS_WITH_HPP
#define STRONG_STARTS_WITH_HPP

#include <string_view>

namespace strong {
/**
 * Starts with
 *
 * @param content
 * @param search
 * @return bool
 */
bool starts_with(std::string_view content, std::string_view search);
}  // namespace strong

#endif
