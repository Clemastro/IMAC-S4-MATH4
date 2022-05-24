#pragma once

//std
#include <iostream>

//This class define a skill from a classe
class Skill {
private:
    //--attribut
    std::string name;
    std::string type;
    int         degat;
    int         conso_pm;

public:
    //--constructor
    Skill();
    Skill(std::string _name, std::string _type);
    Skill(std::string _name, std::string _type, int _degat, int _conso_pm);

    //--methods
    void useSkill();

    //--Getters/Setters
    inline std::string getName() const
    {
        return name;
    }

    inline std::string getType() const
    {
        return type;
    }

    inline int getDegat() const
    {
        return degat;
    }

    inline int getConso() const
    {
        return conso_pm;
    }

    inline void setDegat(int value)
    {
        degat = value;
    }

    inline void setConso(int value)
    {
        conso_pm = value;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Skill& skill)
    {
        os << "Name  : " << skill.getName() << std::endl;
        os << "Type  : " << skill.getType() << std::endl;
        os << "degat : " << skill.getDegat() << std::endl;

        return os;
    }
};