#pragma once

//std
#include <string>
#include <vector>

//intern include
#include "skill.hpp"

//This class define skills for the hero
class Classe {
private:
    //--attribut
    std::string        name;
    std::string        type;
    std::vector<Skill> skills;

public:
    //--constructor
    Classe() = default;
    Classe(std::string _name, std::string _type = "all");

    //--methods
    void add_rand_skill(int nb_of_skill = 1);

    //--Getters/Setters
    inline std::string getName() const
    {
        return name;
    }

    inline std::string getType() const
    {
        return type;
    }

    inline std::vector<Skill>& getSkills()
    {
        return skills;
    }

    inline Skill getSkill(int id) const
    {
        return skills[id];
    }

    inline void addSkill(Skill skill)
    {
        skills.push_back(skill);
    }

    //--Afficheur
    void coutSkills();

    friend std::ostream& operator<<(std::ostream& os, const Classe& classe)
    {
        os << "Name   : " << classe.getName() << std::endl;
        os << "Type   : " << classe.getType() << std::endl;
        os << "Skills :\n";
        for (const auto& it : classe.skills) {
            os << " -> " << it.getName() << std::endl;
        }
        return os;
    }
};