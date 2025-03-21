#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/before_last.hpp>

TEST(Strong, BeforeLast)
{
    ASSERT_EQ(strong::before_last("App\\Http\\Controllers\\Controller", "\\").value(), "App\\Http\\Controllers");
    ASSERT_EQ(strong::before_last("01010101010101", "01").value(), "010101010101");
    ASSERT_EQ(strong::before_last("abcabcabcdef", "abc").value(), "abcabc");
    ASSERT_FALSE(strong::before_last("000111", "1111").has_value());
    ASSERT_TRUE(strong::before_last("000111", "111").has_value());
}
