#include "concrete_factory_a.hpp"
#include "concrete_factory_b.hpp"

int main()
{
    const std::shared_ptr<abstract_factory> factory_1 =
        std::make_shared<concrete_factory_a>();
    const std::shared_ptr<abstract_factory> factory_2 =
        std::make_shared<concrete_factory_b>();

    const std::shared_ptr<abstract_product> product_1 =
        factory_1->create_product();
    const std::shared_ptr<abstract_product> product_2 =
        factory_2->create_product();

    (*product_1)();
    (*product_2)();

    return 0;
}
