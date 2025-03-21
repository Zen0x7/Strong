#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/contains.hpp>

TEST(Strong, Contains)
{
    ASSERT_TRUE(strong::contains("abcdef", "abc"));
    ASSERT_TRUE(strong::contains("abcdef", "def"));
    ASSERT_FALSE(strong::contains("abcdef", "z"));
}
