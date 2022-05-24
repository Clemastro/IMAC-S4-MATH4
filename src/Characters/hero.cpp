#include "hero.hpp"
#include "../Random/Normale.hpp"
#include "../Random/random_classe.hpp"
#include "../Random/random_uniform_int.hpp"

Hero::Hero()
{
    classe = pick_a_random_classe();
    pv     = normale(25, 10);
    pm     = normale(15, 6);
    level  = 0;
}

void Hero::levelUP()
{
    level++;
    heal(level * 2);
    receivePM(1);
    if (level % 5 == 0) {
        classe.add_rand_skill();
        std::cout << "\nYou receive a new skill !:\n"
                  << classe.getSkill(classe.getSkills().size() - 1);
    }
}

void Hero::removePV(int degat)
{
    pv = pv - degat;
    if (pv < 0) {
        pv = 0;
    }
}

void Hero::heal(int _pv)
{
    pv = pv + _pv;
}

void Hero::receivePM(int _pm)
{
    pm = pm + _pm;
}

void Hero::removePM(int _pm)
{
    pm = pm - _pm;
}

bool Hero::is_dead()
{
    if (pv == 0) {
        return true;
    }
    else {
        return false;
    }
}