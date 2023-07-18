#pragma once

#include <iostream>
#include "object.hpp"

class concrete_object : public object {

    public:

        void operator()() const override
        {
            std::cout << "Concrete Object\n";
        }

};
