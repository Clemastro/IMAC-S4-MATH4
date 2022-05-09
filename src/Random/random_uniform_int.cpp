#include "random_uniform_int.hpp"

//std
#include <random>

int random_uniform_int(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}
