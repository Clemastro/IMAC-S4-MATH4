#include "random_skills.hpp"

//std
#include <vector>

//intern include
#include "../Characters/skill.hpp"
#include "random_int.hpp"

Skill pick_a_random_skill()
{
    std::vector<Skill> skills = {
        Skill("Rayons laser", "Magie"),
        Skill("Coup d'épée", "Mélée"),
        Skill("Pluie de flèches", "Distance"),
        Skill("Bélier blindé", "Mélée"),
        Skill("Tire de glace", "Magie"),
    };

    return skills[randomInt(0, skills.size() - 1)];
}