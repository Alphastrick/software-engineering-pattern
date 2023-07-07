#pragma once

#include <iostream>
#include "memento.hpp"

class originator {

    public:

        explicit originator(int value = 0)
            : m_value(value)
        {
            std::cout << "State initialized (" << m_value << ")\n";
        }

        memento save() const
        {
            const memento saved_state({ m_value });
            std::cout << "State saved (" << m_value << ")\n";
            return saved_state;
        }

        void restore(const memento& memento)
        {
            const auto state = memento.get_state();
            m_value = state.value;
            std::cout << "State restored (" << m_value << ")\n";
        }

        void increment()
        {
            m_value++;
            std::cout << "State changed (" << m_value << ")\n";
        }

    private:

        int m_value = 0;

};
