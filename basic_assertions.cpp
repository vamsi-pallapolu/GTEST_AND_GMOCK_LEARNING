#include <gtest/gtest.h>

TEST(TestS, Test1){
    std::cout << "Before Assert" << std::endl;
    ASSERT_EQ(10, 20) << "10 and 20 are not equal";
    std::cout << "After Assert" << std::endl;
}