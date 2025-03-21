#include <gtest/gtest.h>

#include <strong/core.hpp>

TEST(Strong, Version) {
    ASSERT_EQ(strong::version(), "0.0.0");
}