#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/is.hpp>

TEST(Strong, Is) {
  ASSERT_TRUE(strong::is("abcdef", "abc.*"));
  ASSERT_FALSE(strong::is("000000", "abc.*"));
  ASSERT_FALSE(strong::is("000000", "(*invalid)"));
}
