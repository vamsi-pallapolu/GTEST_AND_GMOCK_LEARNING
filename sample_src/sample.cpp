
#include <iostream>
#include "sample.hpp"

void swap(int& a, int& b){
    int t;
     t = a;
     a = b;
     b = t;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 10,b =20;
    std::cout << "Before swap a:" << a << "  b:" << b << std::endl;
    swap(a, b);
    std::cout << "After swap a:" << a << "  b:" << b << std::endl;
    return 0;
}
