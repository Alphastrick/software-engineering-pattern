#pragma once

#include "state.hpp"

class memento {

    public:

        explicit memento(const state& state = {})
            : m_state(state)
        {}

        void set_state(const state& state)
        {
            m_state = state;
        }

        state get_state() const
        {
            return m_state;
        }

    private:

        state m_state;

};
