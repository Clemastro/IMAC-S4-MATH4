#include <iostream>
#include "Random/Binomiale.hpp"
//#include "Random/Geometrie.hpp"
#include "Random/random_skills.hpp"

int main()
{
    bool stop = false;
    char ans;
    while (!stop) {
        /*Skill skill = pick_a_random_skill();
        std::cout << skill << std::endl;*/

        //std::cout << geometrie(0.1) << std::endl;

        std::cout << "Dice ? (O/n)\n"
                  << std::endl;
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}