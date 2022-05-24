#include "vilain.hpp"
#include "../Random/Exponentielle.hpp"
#include "../Random/Normale.hpp"

Vilain::Vilain(int _level, float p)
{
    level = _level + exponentielle(p);
    pv    = normale(level * 3, 10 * (level / 2));
    degat = normale(level * 2, 10 * (level / 2));
    if (degat < 0) {
        degat = 0;
    }
    malus = 0;
}

void Vilain::removePV(int _degat)
{
    pv = pv - _degat;
    if (pv < 0) {
        pv = 0;
    }
}

bool Vilain::is_dead()
{
    if (pv == 0) {
        return true;
    }
    else {
        return false;
    }
}