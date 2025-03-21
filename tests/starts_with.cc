#include <gtest/gtest.h>

#include <strong/starts_with.hpp>

TEST(Strong, StartsWith) {
    ASSERT_TRUE(strong::starts_with("abcdef", "abc"));
    ASSERT_TRUE(strong::starts_with("defabc", "def"));
    ASSERT_FALSE(strong::starts_with("abcdef", "def"));
    ASSERT_FALSE(strong::starts_with("defabc", "abc"));
}
