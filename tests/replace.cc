#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/replace.hpp>

TEST(Strong, Replace)
{
    ASSERT_EQ(strong::replace("abcdef", "abc", "zzz"), "zzzdef");
    ASSERT_EQ(strong::replace("hello-world", "hello", "mine"), "mine-world");
    ASSERT_EQ(strong::replace("hello-world", "develop", "mine"), "hello-world");
}
