#pragma once

#include <iostream>
#include "abstract_product.hpp"

class concrete_product_a : public abstract_product {

    public:

        void operator()() const override
        {
            std::cout << "Product A\n";
        }

};
