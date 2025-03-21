#pragma once

#ifndef STRONG_STARTS_WITH_HPP
#define STRONG_STARTS_WITH_HPP

#include <string>
#include <string_view>

namespace strong {
    /**
     * Starts with
     *
     * @param string
     * @param query
     * @return bool
     */
    bool starts_with(const std::string &string, std::string_view query);
}

#endif
