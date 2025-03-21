#pragma once

#ifndef STRONG_BEFORE_HPP
#define STRONG_BEFORE_HPP

#include <optional>
#include <string_view>

namespace strong {
/**
 * Before
 *
 * @param content
 * @param search
 * @return std::optional<std::string_view>
 */
std::optional<std::string_view> before(std::string_view content,
                                       std::string_view search);
}  // namespace strong

#endif
