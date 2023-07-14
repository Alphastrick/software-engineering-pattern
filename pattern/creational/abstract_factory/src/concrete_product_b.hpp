#pragma once

#include <iostream>
#include "abstract_product.hpp"

class concrete_product_b : public abstract_product {

    public:

        void operator()() const override
        {
            std::cout << "Product B\n";
        }

};
