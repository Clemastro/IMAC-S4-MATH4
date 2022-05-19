#include "vilain_turn.hpp"

//std
#include <iostream>

//intern include
#include "../Characters/interaction.hpp"

void vilain_turn(Hero& hero, Vilain& vilain)
{
    std::cout << "The Vilain attack !\n";
    Vilain_attack_Hero(vilain, hero);
}