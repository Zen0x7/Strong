#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/before.hpp>

TEST(Strong, Before)
{
    ASSERT_EQ(strong::before("abcdef", "def").value(), "abc");
    ASSERT_EQ(strong::before("abcdef", "cd").value(), "ab");
    ASSERT_EQ(strong::before("abcdef", "ef").value(), "abcd");
    ASSERT_FALSE(strong::before("abcdef", "z").has_value());
    ASSERT_EQ(strong::before("0101010101", "01").value(), "");
}
