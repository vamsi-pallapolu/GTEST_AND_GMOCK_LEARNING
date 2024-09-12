#include "turtle.hpp"
class Turtle{
public:
    /**
     The destructor is declared as virtual to ensure that the destructor of any 
     derived class is called when deleting an object through a pointer to the base class.
     */
    virtual ~Turtle() {}

    virtual void Penup() = 0;
};