#include "Rademacher.hpp"
#include "random_uniform_int.hpp"

int rademacher(float p)
{
    int res  = 0;
    int rand = random_uniform_int(0, 100);
    if (rand <= int(p) * 100) {
        res = 1;
    }
    else {
        res = -1;
    }

    return res;
}