#include "gmock/gmock.h"
#include "gtest/gtest.h"

// This is an abstarct class
class Foo{
    virtual ~Foo();

    // overload on the types and/or no of arguments
    virtual int Add(Element x);
    virtual int Add(int times, Element x);
};
class MockFoo: public Foo{
    MOCK_METHOD(int, Add, (Element x), (override));
};