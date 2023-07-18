#include "concrete_factory.hpp"

int main()
{
    concrete_factory f;
    std::shared_ptr<object> obj = f.create("concrete_object");
    (*obj)();
    return 0;
}
