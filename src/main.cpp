#include <iostream>
#include "Random/random_skills.hpp"

int main()
{
    std::cout << "Hello World\n";
    Skill skill = pick_a_random_skill();
    std::cout << skill << std::endl;
}