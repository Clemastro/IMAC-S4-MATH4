#include "interaction.hpp"
#include "../UI/skill_selection.hpp"

bool Hero_attack_Vilain(const Hero& hero, Vilain& vilain)
{
    std::cout << "Choose skill to use\n";
    Skill choosen_skill = skill_selection(hero.getClasse().getSkills());
    if (choosen_skill.getDegat() != -1) {
        vilain.removePV(choosen_skill.getDegat());
        return true;
    }
    else {
        return false;
    }
}

void Vilain_attack_Hero(Vilain& vilain, Hero& hero)
{
    std::cout << "Vilain attack !\n";
    hero.removePV(vilain.getDEG());
}