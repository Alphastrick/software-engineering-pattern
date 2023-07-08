#pragma once

#include <string>

class component {

    public:

        virtual std::string operator()() const
        {
            return "component";
        }

};
