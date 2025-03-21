#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/except.hpp>

TEST(Strong, Except) {
  ASSERT_EQ(strong::except("abcdef", "cd").value(), "abef");
  ASSERT_FALSE(strong::except("abcdef", "z").has_value());
  ASSERT_EQ(strong::except("0101010101", "01").value(), "01010101");
}
