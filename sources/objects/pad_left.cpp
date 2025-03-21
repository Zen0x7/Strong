#include <strong/pad_left.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong
{
std::string pad_left(const std::string_view content, const std::size_t length, const char pad)
{
    if (content.size() >= length)
    {
        return std::string{content};
    }

    std::string result(length - content.size(), pad);
    result.append(content);

    return result;
}
} // namespace strong
