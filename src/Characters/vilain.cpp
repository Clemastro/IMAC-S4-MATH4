#include "vilain.hpp"
#include "../Random/Geometry.hpp"
#include "../Random/random_uniform_int.hpp"

Vilain::Vilain(int _level, float p)
{
    level = _level + geometry(p);
    pv    = level * random_uniform_int(1, level);
    degat = level * random_uniform_int(1, 1 + int(level / 2));
    malus = 0;
}

void Vilain::removePV(int _degat)
{
    pv = pv - _degat;
    if (pv < 0) {
        pv = 0;
    }
}
