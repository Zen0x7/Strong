#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_EXCEPT_HPP
#define STRONG_EXCEPT_HPP

#include <optional>
#include <string>

namespace strong {
/**
 * Except
 *
 * @param content
 * @param search
 * @return std::optional<std::string>
 */
std::optional<std::string> except(std::string_view content,
                                  std::string_view search);
}  // namespace strong

#endif
