#pragma once

//std
#include <iostream>

//This class define a skill from a classe
class Skill {
private:
    //--attribut
    std::string name;
    int         degat;

public:
    //--constructor
    Skill() = default;

    //--methods
    void useSkill();

    //--Getters/Setters
    inline std::string getName() const
    {
        return name;
    }

    inline int getDegat() const
    {
        return degat;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Skill& skill)
    {
        os << "Name  : " << skill.getName() << std::endl;
        os << "degat : " << skill.getDegat() << std::endl;

        return os;
    }
};