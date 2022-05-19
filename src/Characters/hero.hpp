#pragma once

//std
#include <iostream>
#include <string>

//intern include
#include "classe.hpp"
#include "vilain.hpp"

//This class define the character of the player
class Hero {
private:
    //--Attribut
    Classe classe;
    int    pv;
    int    pm;
    int    level;

public:
    //--Constructor
    Hero();

    //--Methods
    void levelUP();
    void removePV(int degat);
    void heal(int _pv);

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
        return level;
    }

    inline Classe getClasse() const
    {
        return classe;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Hero& hero)
    {
        os << "LEVEL : " << hero.getLevel() << std::endl;
        os << "PV    : " << hero.getPV() << std::endl;
        os << "PM    : " << hero.getPM() << std::endl;
        os << "CLASS : " << hero.getClasse().getName() << std::endl;

        return os;
    }
};