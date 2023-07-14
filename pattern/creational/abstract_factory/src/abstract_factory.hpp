#pragma once

#include <memory>
#include "abstract_product.hpp"

class abstract_factory {

    public:

        virtual std::shared_ptr<abstract_product> create_product() const = 0;

};
