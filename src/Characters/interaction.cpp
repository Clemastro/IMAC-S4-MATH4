#include "interaction.hpp"
#include "../UI/skill_selection.hpp"

bool Hero_attack_Vilain(Hero& hero, Vilain& vilain)
{
    std::cout << "Choose skill to use\n";
    Skill choosen_skill = skill_selection(hero.getClasse().getSkills());
    if (choosen_skill.getDegat() != -1 && hero.getPM() >= choosen_skill.getConso()) {
        vilain.removePV(choosen_skill.getDegat());
        hero.removePM(choosen_skill.getConso());
        return true;
    }
    else {
        if (hero.getPM() < choosen_skill.getConso()) {
            std::cout << "You don't have enought PM !\n";
        }
        return false;
    }
}

void Vilain_attack_Hero(Vilain& vilain, Hero& hero)
{
    int vilain_degat = vilain.getDEG() - vilain.getMalus();
    if (vilain_degat < 0) {
        vilain_degat = 0;
        std::cout << "You dodge the vilain !\n";
    }
    else {
        std::cout << "You recieve " << vilain_degat << " damage\n";
        hero.removePV(vilain_degat);
    }
}