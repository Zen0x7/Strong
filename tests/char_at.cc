#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/char_at.hpp>

TEST(Strong, CharAt) {
  ASSERT_EQ(strong::char_at("abc", 0).value(), 'a');
  ASSERT_EQ(strong::char_at("abc", 1).value(), 'b');
  ASSERT_EQ(strong::char_at("abc", 2).value(), 'c');
  ASSERT_FALSE(strong::char_at("abc", 3).has_value());
}
