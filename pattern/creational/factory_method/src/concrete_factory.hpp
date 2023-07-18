#pragma once

#include "factory.hpp"
#include "concrete_object.hpp"

class concrete_factory : public factory {

    public:

        std::shared_ptr<object> create(const std::string& key) const override
        {
            if (key == "concrete_object")
            {
                return std::make_shared<concrete_object>();
            }

            return nullptr;
        }

};
