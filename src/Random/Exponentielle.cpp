#include "Exponentielle.hpp"

//intern include
#include <cmath>
#include "random_uniform_int.hpp"

double exponentielle(float p)
{
    double res = -log(random_uniform_int(0, 100) / 100.0) / p;
    if (isinfl(res)) {
        res = 0;
    }
    return res;
}