#pragma once

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
