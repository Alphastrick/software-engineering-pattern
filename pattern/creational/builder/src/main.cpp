#include "director.hpp"
#include "concrete_builder.hpp"

int main()
{
    concrete_builder builder;
    director director(builder);
    director.configure();
    const object obj = director.build();
    obj();
    return 0;
}
