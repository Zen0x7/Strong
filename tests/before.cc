#include <gtest/gtest.h>

#include <strong/before.hpp>

TEST(Strong, Before) {
  ASSERT_EQ(strong::before("abcdef", "def").value(), "abc");
  ASSERT_EQ(strong::before("abcdef", "cd").value(), "ab");
  ASSERT_EQ(strong::before("abcdef", "ef").value(), "abcd");
  ASSERT_FALSE(strong::before("abcdef", "z").has_value());
  ASSERT_EQ(strong::before("0101010101", "01").value(), "");
}
