#include "interaction.hpp"
#include "../UI/skill_selection.hpp"

void Hero_attack_Vilain(Hero& hero, Vilain& vilain)
{
    std::cout << "Choose skill to use\n";
    Skill choosen_skill = skill_selection(hero.getClasse().getSkills());
    if (choosen_skill.getDegat() != -1) {
        vilain.removePV(choosen_skill.getDegat());
    }
}