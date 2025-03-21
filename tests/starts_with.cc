#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/starts_with.hpp>

TEST(Strong, StartsWith) {
  ASSERT_TRUE(strong::starts_with("abcdef", "abc"));
  ASSERT_TRUE(strong::starts_with("defabc", "def"));
  ASSERT_FALSE(strong::starts_with("abcdef", "def"));
  ASSERT_FALSE(strong::starts_with("defabc", "abc"));
}
