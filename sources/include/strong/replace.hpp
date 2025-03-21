#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_REPLACE_HPP
#define STRONG_REPLACE_HPP

#include <string>
#include <string_view>

namespace strong {
/**
 * Replace
 *
 * @param content
 * @param find
 * @param with
 * @return std::string
 */
std::string replace(std::string_view content, std::string_view find,
                    std::string_view with);
}  // namespace strong

#endif
