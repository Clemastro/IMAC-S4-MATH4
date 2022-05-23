#pragma once

//std
#include <iostream>
#include <string>

//This class define the ennemy of the player
class Vilain {
private:
    //--Attribut
    int pv;
    int degat;
    int level;
    int malus;

public:
    //--Constructor
    Vilain() = default;
    Vilain(int _level, float p = 1);

    //Methode
    void removePV(int degat);
    void addMalus(int penality)
    {
        malus = penality;
    }
    bool is_dead();

    //--Getters
    inline int getPV() const
    {
        return pv;
    }

    inline int getDEG() const
    {
        return degat;
    }

    inline int getLevel() const
    {
        return level;
    }

    inline int getMalus()
    {
        int penality = malus;
        malus        = 0;
        return penality;
    }

    //--Afficheur
    friend std::ostream& operator<<(std::ostream& os, const Vilain& vilain)
    {
        os << "LEVEL : " << vilain.getLevel() << std::endl;
        os << "PV    : " << vilain.getPV() << std::endl;
        os << "DEGAT : " << vilain.getDEG() << std::endl;

        return os;
    }
};