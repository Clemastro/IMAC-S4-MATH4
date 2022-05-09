#include <iostream>
#include "Random/Binomiale.hpp"
#include "Random/Geometry.hpp"
#include "Random/random_skills.hpp"

int main()
{
    bool stop = false;
    char ans;
    while (!stop) {
        Skill skill = pick_a_random_skill("Magie", 0.8);
        std::cout << skill << std::endl;

        //std::cout << geometry(0.1) << std::endl;

        std::cout << "Dice ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}