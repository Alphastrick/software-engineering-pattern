#pragma once

#include "builder.hpp"

class director {

    public:

        explicit director(builder& builder)
            : m_builder(builder)
        {}

        void configure()
        {
            m_builder.set_prefix("Some Concrete");
        }

        object build() const
        {
            return m_builder.build();
        }

    private:

        builder& m_builder;

};
