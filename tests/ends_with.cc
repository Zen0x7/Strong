#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/ends_with.hpp>

TEST(Strong, EndsWith)
{
    ASSERT_FALSE(strong::ends_with("abcdef", "abc"));
    ASSERT_FALSE(strong::ends_with("defabc", "def"));
    ASSERT_TRUE(strong::ends_with("abcdef", "def"));
    ASSERT_TRUE(strong::ends_with("defabc", "abc"));
}
