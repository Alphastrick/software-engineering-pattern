#pragma once

#include "builder.hpp"

class concrete_builder : public builder {

    public:

        object build() const override
        {
            return object(m_prefix + (m_prefix.length() > 0 ? " " : "") + "Object");
        }

        void set_prefix(const std::string& prefix) override
        {
            m_prefix = prefix;
        }

        std::string get_prefix() const override
        {
            return m_prefix;
        }

    private:

        std::string m_prefix;

};
