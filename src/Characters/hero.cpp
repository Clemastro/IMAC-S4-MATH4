#include "hero.hpp"
#include "../Random/random_classe.hpp"
#include "../Random/random_uniform_int.hpp"

Hero::Hero()
{
    classe = pick_a_random_classe();
    pv     = random_uniform_int(1, 15);
    pm     = random_uniform_int(1, 15);
    level  = 0;
}

void Hero::levelUP()
{
    level++;
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

bool Hero::is_dead()
{
    if (pv == 0) {
        return true;
    }
    else {
        return false;
    }
}