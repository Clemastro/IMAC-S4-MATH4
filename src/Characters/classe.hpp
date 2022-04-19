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
    std::vector<Skill> skills;

public:
    //--constructor
    Classe() = default;

    //--Getters/Setters
    inline std::string getName() const
    {
        return name;
    }

    inline std::vector<Skill> getSkills() const
    {
        return skills;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Classe& classe)
    {
        os << "Name : " << classe.getName() << std::endl;
        os << "Skills :\n";
        for (const auto& it : classe.skills) {
            os << " -> " << it.getName() << std::endl;
        }
        return os;
    }
};