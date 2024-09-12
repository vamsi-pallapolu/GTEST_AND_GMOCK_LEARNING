#include "gmock/gmock.h"
#include "gtest/gtest.h"
class Turtle{
public:
    /**
     The destructor is declared as virtual to ensure that the destructor of any 
     derived class is called when deleting an object through a pointer to the base class.
     */
    virtual ~Turtle() {}

    virtual void PenUp() = 0;
};
class MockTurtle: public Turtle{
public:
    MOCK_METHOD(void, PenUp, (), (override));
};

using ::testing::AtLeast;

TEST(MockTest, CanDrawSomething){
    MockTurtle turtle;
    EXPECT_CALL(turtle, PenUp).Times(AtLeast(1)); // this test checks PenUp is called atleast once
}
