#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/after_last.hpp>

TEST(Strong, AfterLast) {
  ASSERT_EQ(
      strong::after_last("App\\Http\\Controllers\\Controller", "\\").value(),
      "Controller");
  ASSERT_EQ(strong::after_last("01010101010101111", "01").value(), "111");
  ASSERT_EQ(strong::after_last("abcabcabcdef", "abc").value(), "def");
  ASSERT_FALSE(strong::after_last("000111", "0000").has_value());
  ASSERT_TRUE(strong::after_last("000111", "000").has_value());
}
