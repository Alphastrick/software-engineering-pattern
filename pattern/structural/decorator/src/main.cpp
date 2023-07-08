#include <iostream>

#include "decorator.hpp"

int main()
{
    component component;
    decorator decorator(component);
    std::cout << component() << '\n';
    std::cout << decorator() << '\n';
    return 0;
}
