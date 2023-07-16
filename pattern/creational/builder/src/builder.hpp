#pragma once

#include "object.hpp"

class builder {

    public:

        virtual object build() const = 0;
        virtual void set_prefix(const std::string& prefix) = 0;
        virtual std::string get_prefix() const = 0;

};
