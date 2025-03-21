#include <strong/starts_with.hpp>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

namespace strong
{
bool starts_with(const std::string_view content, const std::string_view search)
{
    return content.starts_with(search);
}
} // namespace strong
