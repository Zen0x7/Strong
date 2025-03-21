#include <strong/except.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong
{
std::optional<std::string> except(const std::string_view content, const std::string_view search)
{
    const std::size_t pos = content.find(search);
    if (pos == std::string_view::npos)
    {
        return std::nullopt;
    }
    std::string result;
    result.reserve(content.size() - search.size());
    result.append(content.substr(0, pos));
    result.append(content.substr(pos + search.size()));
    return result;
}
} // namespace strong
