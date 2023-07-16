#pragma once

#include <iostream>
#include <string>

class object {

    public:

        explicit object(const std::string name)
            : m_name(name)
        {}

        void operator()() const
        {
            std::cout << "Object '" << m_name << "'\n";
        }

    private:

        const std::string m_name;

};
