#pragma once

#include "abstract_factory.hpp"
#include "concrete_product_a.hpp"

class concrete_factory_a : public abstract_factory {

    public:

        std::shared_ptr<abstract_product> create_product() const override
        {
            return std::make_shared<concrete_product_a>();
        }

};
