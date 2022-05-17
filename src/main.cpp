#include <iostream>
#include "Characters/hero.hpp"
#include "Characters/interaction.hpp"
#include "Characters/vilain.hpp"

int main()
{
    bool   stop = false;
    char   ans;
    int    i = 2;
    Vilain vilain(i, 0.7);
    Hero   hero;
    while (!stop) {
        std::cout << "Your Hero :\n";
        std::cout << hero << std::endl;
        std::cout << "The vilain :\n";
        std::cout << vilain << std::endl;

        std::cout << "Attack ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'o') {
            Hero_attack_Vilain(hero, vilain);
        }
        else {
            Vilain_attack_Hero(vilain, hero);
        }

        std::cout << "Dice ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}