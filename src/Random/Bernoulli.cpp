#include "Bernoulli.hpp"
#include "random_int.hpp"

int bernoulli(float p)
{
    int res  = 0;
    int rand = randomInt(0, 100);
    if (rand < p * 100) {
        res = 1;
    }
    else {
        res = 0;
    }

    return res;
}