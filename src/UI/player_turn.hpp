#pragma once

#include <string>
#include "../Characters/hero.hpp"

void player_turn(Hero& hero, Vilain& vilain);

enum class Action {
    attack,
    heal,
    defense,
};

Action action_selection();