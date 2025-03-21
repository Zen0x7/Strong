#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <strong/between.hpp>

TEST(Strong, Between)
{
    ASSERT_EQ(strong::between("abcdef", "ab", "ef").value(), "cd");
    ASSERT_EQ(strong::between("ab0000000000de", "ab", "de").value(), "0000000000");
    ASSERT_EQ(strong::between("010", "0", "0").value(), "1");
    ASSERT_EQ(strong::between("01110", "0", "0").value(), "111");
    ASSERT_EQ(strong::between("0111011111111", "0", "0").value(), "111");
    ASSERT_EQ(strong::between("01110111111110", "0", "0").value(), "111");
}
