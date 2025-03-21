#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/after.hpp>

TEST(Strong, After)
{
    ASSERT_EQ(strong::after("abcdef", "abc").value(), "def");
    ASSERT_EQ(strong::after("abcdef", "cd").value(), "ef");
    ASSERT_EQ(strong::after("abcdef", "ef").value(), "");
    ASSERT_FALSE(strong::after("abcdef", "z").has_value());
    ASSERT_EQ(strong::after("0101010101", "01").value(), "01010101");
}
