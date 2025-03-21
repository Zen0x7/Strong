#pragma once

#ifndef STRONG_AFTER_HPP
#define STRONG_AFTER_HPP

#include <optional>
#include <string_view>

namespace strong {
/**
 * After
 *
 * @param content
 * @param search
 * @return std::optional<std::string_view>
 */
std::optional<std::string_view> after(std::string_view content,
                                      std::string_view search);
}  // namespace strong

#endif
