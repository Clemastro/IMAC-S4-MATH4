#include "Bernoulli.hpp"
#include "random_uniform_int.hpp"

int bernoulli(float p)
{
    int rand = random_uniform_int(0, 100);
    if (rand < p * 100) {
        return 1;
    }
    else {
        return 0;
    }
}