#include "random_skills.hpp"

//std
#include <vector>

//intern include
#include "../Characters/skill.hpp"
#include "Bernoulli.hpp"
#include "random_uniform_int.hpp"

Skill pick_a_random_skill(std::string type, float p)
{
    std::vector<Skill> skills = {
        Skill("Rayons laser", "Magie"),
        Skill("Coup d'épée", "Mélée"),
        Skill("Bélier blindé", "Mélée"),
        Skill("Pluie de flèches", "Distance"),
        Skill("Tire de glace", "Magie"),
    };

    if (type != "all" && p == -1) {
        std::vector<Skill> new_vector;
        for (const auto& skill : skills) {
            if (skill.getType() == type) {
                new_vector.push_back(skill);
            }
        }
        skills = new_vector;
    }

    if (type != "all" && p != -1) {
        Skill rand = skills[random_uniform_int(0, skills.size() - 1)];
        if (bernoulli(p)) {
            while (rand.getType() != type) {
                rand = skills[random_uniform_int(0, skills.size() - 1)];
            }
        }
        return rand;
    }

    return skills[random_uniform_int(0, skills.size() - 1)];
}