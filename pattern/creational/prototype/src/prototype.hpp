#pragma once

#include <iostream>
#include <memory>

class prototype {

    public:

        explicit prototype(int value)
            : m_value(value)
        {}

        std::shared_ptr<prototype> clone() const
        {
            return std::make_shared<prototype>(*this);
        }

        void operator()() const
        {
            std::cout << m_value << '\n';
        }
        
    private:

        int m_value;

};
