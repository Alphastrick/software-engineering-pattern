#pragma once

#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include "flyweight.hpp"
#include "flyweight_a.hpp"

class flyweight_factory {

    public:

        flyweight& get_flyweight(const std::string& key)
        {
            std::map<std::string, std::shared_ptr<flyweight>>::iterator flyweight_iterator
                = m_flyweights.find(key);
            if (flyweight_iterator != m_flyweights.end())
            {
                return *flyweight_iterator->second;
            }

            if (key == "a")
            {
                m_flyweights[key] = std::make_shared<flyweight_a>();
            }
            else
            {
                throw std::invalid_argument("A valid key must be provided");
            }

            return *m_flyweights[key];
        }

    private:

        std::map<std::string, std::shared_ptr<flyweight>> m_flyweights;

};
