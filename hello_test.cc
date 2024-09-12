#include <gtest/gtest.h>

TEST(HelloTest, BasicAssrtions){
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7*6, 42);
}