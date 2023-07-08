#pragma once

#include <memory>
#include "component.hpp"

class decorator : public component {

    public:

        explicit decorator(component& comp)
            : m_component(comp)
        {}

        std::string operator()() const override
        {
            return "decorated " + m_component.operator()();
        }

    private:

        component& m_component;

};
