#pragma once

#include <memory>

class singleton {

    public:

        static singleton& get_instance()
        {
            if (m_instance == nullptr)
            {
                m_instance = std::make_unique<singleton>();
            }

            return *m_instance;
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

        static std::unique_ptr<singleton> m_instance;

};

int singleton::m_id_counter = 0;
std::unique_ptr<singleton> singleton::m_instance = nullptr;
