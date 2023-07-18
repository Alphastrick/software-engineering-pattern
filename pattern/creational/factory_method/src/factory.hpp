#pragma once

#include <memory>
#include <string>
#include "object.hpp"

class factory {

    public:

        virtual std::shared_ptr<object> create(const std::string& key) const = 0;

};
