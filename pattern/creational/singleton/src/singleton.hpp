#pragma once

#include <memory>

class singleton {

    public:

        static singleton& get_instance()
        {
            return m_instance;
        }

        int get_id() const
        {
            return m_id;
        }

    private:

        explicit singleton()
            : m_id(m_id_counter++)
        {}

        static int m_id_counter;
        const int m_id;

        static singleton m_instance;

};

int singleton::m_id_counter = 0;
singleton singleton::m_instance;
