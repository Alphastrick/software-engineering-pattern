#include "prototype.hpp"

int main()
{
    prototype proto(1);
    std::shared_ptr<prototype> clone_1 = proto.clone();

    proto();
    (*clone_1)();

    return 0;
}
