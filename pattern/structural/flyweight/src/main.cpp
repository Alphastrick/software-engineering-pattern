#include "flyweight_factory.hpp"

int main()
{
    flyweight_factory factory;
    flyweight& a1 = factory.get_flyweight("a");
    a1();
    flyweight& a2 = factory.get_flyweight("a");
    a2();
    return 0;
}
