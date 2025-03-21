#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRONG_CORE_HPP
#define STRONG_CORE_HPP

#include <string_view>

namespace strong {
/**
 * Retrieves the library version.
 *
 * @return The current version.
 */
std::string_view version();

}  // namespace strong

#endif
