#include <gtest/gtest.h>
#include "sample_src/sample.hpp"

TEST(TestS, Test1){
    std::cout << "Before Assert" << std::endl;
    int a =10, b= 20;
    swap(a, b);
    EXPECT_EQ(a, 20);
    EXPECT_EQ(b, 10);
    std::cout << "After Assert" << std::endl;
}