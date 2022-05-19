#include <iostream>
#include "Characters/hero.hpp"
#include "Characters/interaction.hpp"
#include "Characters/vilain.hpp"
#include "UI/player_turn.hpp"
#include "UI/vilain_turn.hpp"

int main()
{
    bool   stop = false;
    char   ans;
    int    i = 2;
    Vilain vilain(i, 0.7);
    Hero   hero;
    while (!stop) {
        std::cout << "\nYour Hero :\n";
        std::cout << hero << std::endl;
        std::cout << "The vilain :\n";
        std::cout << vilain << std::endl;

        player_turn(hero, vilain);
        vilain_turn(hero, vilain);

        std::cout << "Dice ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}