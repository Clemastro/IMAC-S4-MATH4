#include "Geometrie.hpp"
#include "Bernoulli.cpp"

int geometrie(float p)
{
    int nb_until_success = 0;
    while (bernoulli(p)) {
        nb_until_success++;
    }
    return nb_until_success;
}