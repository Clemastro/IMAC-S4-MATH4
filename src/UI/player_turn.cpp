#include "player_turn.hpp"

//std
#include <iostream>

//intern include
#include "../Characters/interaction.hpp"
#include "get_input_from_user.hpp"

void player_turn(Hero& hero, Vilain& vilain)
{
    std::cout << "It's your turn :\n";
    bool have_play = false;

    while (!have_play) {
        Action action = action_selection();

        switch (action) {
        case Action::attack:
            have_play = Hero_attack_Vilain(hero, vilain);
            break;

        case Action::heal:
            hero.heal(hero.getLevel() * 2 + 1);
            std::cout << "You recieve " << hero.getLevel() * 2 + 1 << " PV\n";
            have_play = true;
            break;

        case Action::defense:
            std::cout << "You prepare yourself against the vilain\n";
            vilain.addMalus(hero.getLevel() * 3 + 1);
            have_play = true;
            break;

        default: break;
        }
    }
    hero.receivePM(1);
}

Action action_selection()
{
    std::cout << "1: Attack | 2: Heal | 3: Defense\n";

    int cmd = get_input_from_user<int>();

    switch (cmd) {
    case 1:
        return Action::attack;
        break;

    case 2:
        return Action::heal;
        break;

    case 3:
        return Action::defense;
        break;

    default:
        std::cout << "This command doesn't exist\n";
        return action_selection();
        break;
    }
}