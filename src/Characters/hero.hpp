#pragma once

//std
#include <iostream>
#include <string>

//intern include
#include "vilain.hpp"

//This class define the character of the player
class Hero {
private:
    //--Attribut
    std::string classe;
    int         pv;
    int         pm;
    std::string weapon;
    int         level;

public:
    //--Constructor
    Hero() = default;

    //--Methods
    void levelUP();
    void attackVilain(Vilain vilain);

    //--Getters/Setters
    inline int getPV() const
    {
        return pv;
    }

    inline int getPM() const
    {
        return pm;
    }

    inline int getLevel() const
    {
        return pv;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Hero& hero)
    {
        os << "LEVEL : " << hero.getLevel() << std::endl;
        os << "PV    : " << hero.getPV() << std::endl;
        os << "PM    : " << hero.getPM() << std::endl;

        return os;
    }
};