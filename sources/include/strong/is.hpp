#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_IS_HPP
#define STRONG_IS_HPP

#include <string_view>

namespace strong {
/**
 * Is
 *
 * @param content
 * @param expression
 * @return bool
 */
bool is(std::string_view content, std::string_view expression);
}  // namespace strong

#endif
