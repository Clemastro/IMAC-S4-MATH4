#include "random_skills.hpp"

//std
#include <vector>

//intern include
#include "../Characters/skill.hpp"
#include "Bernoulli.hpp"
#include "Binomiale.hpp"
#include "Geometry.hpp"
#include "random_uniform_int.hpp"

Skill pick_a_random_skill(std::string type, float p)
{
    std::vector<Skill> skills = {
        Skill("Coup d'épée", "Mélée"),
        Skill("Bélier blindé", "Mélée"),
        Skill("Coup de bouclier", "Tank"),
        Skill("Charge de fer", "Tank"),
        Skill("Pluie de flèches", "Distance"),
        Skill("Tir téléguidé", "Distance"),
        Skill("Tire de glace", "Magie"),
        Skill("Rayons laser", "Magie"),
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
        if (rand.getType() == type) {
            rand.setDegat(binomiale(15, 0.8));
            rand.setConso(1 + geometry(0.5));
        }
        else {
            rand.setDegat(binomiale(10, 0.5));
            rand.setConso(1 + geometry(0.8));
        }
        return rand;
    }

    return skills[random_uniform_int(0, skills.size() - 1)];
}