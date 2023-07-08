#include "originator.hpp"

int main()
{
    originator orig(0);
    const auto init_memento = orig.save();
    orig.increment();
    orig.restore(init_memento);
    return 0;
}
