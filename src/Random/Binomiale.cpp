#include "Binomiale.hpp"
#include "Bernoulli.hpp"

int binomiale(int n, float p)
{
    int nb_of_success = 0;
    for (int i = 0; i < n; i++) {
        nb_of_success = nb_of_success + bernoulli(p);
    }
    return nb_of_success;
}