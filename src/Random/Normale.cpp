#include "Normale.hpp"

//intern include
#include "Exponentielle.hpp"
#include "random_uniform_int.hpp"

//std
#include <cmath>

double Box_Muller()
{
    return sqrt(exponentielle(0.5)) * cos(2 * M_PI * (random_uniform_int(0, 100) / 100.0));
}

double normale(float esperance, float variance)
{
    return esperance + sqrt(variance) * Box_Muller();
}