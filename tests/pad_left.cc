#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/pad_left.hpp>

TEST(Strong, PadLeft) {
  ASSERT_EQ(strong::pad_left("00011", 10, '*'), "*****00011");
  ASSERT_EQ(strong::pad_left("10000", 10, '.'), ".....10000");
  ASSERT_EQ(strong::pad_left("10000", 15, '.'), "..........10000");
}
