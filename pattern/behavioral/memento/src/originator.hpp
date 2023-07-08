#pragma once

#include <iostream>
#include "memento.hpp"

class originator {

    public:

        explicit originator(int value = 0)
            : m_state({ value })
        {
            std::cout << "State initialized (" << m_state.value << ")\n";
        }

        memento save() const
        {
            const memento saved_state(m_state);
            std::cout << "State saved (" << m_state.value << ")\n";
            return saved_state;
        }

        void restore(const memento& memento)
        {
            m_state = memento.get_state();
            std::cout << "State restored (" << m_state.value << ")\n";
        }

        void increment()
        {
            std::cout << "State changed (" << ++m_state.value << ")\n";
        }

    private:

        state m_state;

};
