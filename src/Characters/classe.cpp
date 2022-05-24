#include "classe.hpp"
#include "../Random/random_skills.hpp"

Classe::Classe(std::string _name, std::string _type)
    : name(_name), type(_type)
{
    add_rand_skill(3);
}

void Classe::add_rand_skill(int nb_of_skill)
{
    for (int i = 0; i < nb_of_skill; i++) {
        if (skills.size() < 8) {
            Skill new_skill;
            bool  is_already_in = true;
            while (is_already_in) {
                is_already_in = false;
                new_skill     = pick_a_random_skill(type, 0.7);
                for (const auto& skill : skills) {
                    if (new_skill.getName() == skill.getName()) {
                        is_already_in = true;
                    }
                }
            }
            addSkill(new_skill);
        }
        else {
            std::cout << "Max nb of skill reach\n";
        }
    }
}

void Classe::coutSkills()
{
    for (auto const& skill : skills) {
        std::cout << skill << std::endl;
    }
}