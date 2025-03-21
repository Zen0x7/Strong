#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_AFTER_LAST_HPP
#define STRONG_AFTER_LAST_HPP

#include <optional>
#include <string_view>

namespace strong {
/**
 * After last
 *
 * @param content
 * @param search
 * @return std::optional<std::string_view>
 */
std::optional<std::string_view> after_last(std::string_view content,
                                           std::string_view search);
}  // namespace strong

#endif
