#pragma once

#ifndef STRONG_AFTER_HPP
#define STRONG_AFTER_HPP

#include <string_view>
#include <optional>

namespace strong {
    /**
     * After
     *
     * @param content
     * @param search
     * @return bool
     */
    std::optional<std::string_view> after(std::string_view content, std::string_view search);
}

#endif
