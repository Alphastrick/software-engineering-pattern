#include <iostream>

#include "singleton.hpp"

int main()
{
    singleton& obj_1 = singleton::get_instance();
    singleton& obj_2 = singleton::get_instance();
    std::cout << obj_1.get_id() << '\n';
    std::cout << obj_2.get_id() << '\n';
    return 0;
}
