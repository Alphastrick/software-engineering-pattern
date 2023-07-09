#pragma once

#include <iostream>
#include "flyweight.hpp"

class flyweight_a : public flyweight {

    public:

        void operator()() const override
        {
            std::cout << "Flyweight A at address " << this << '\n';
        }

};
