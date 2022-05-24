#include "random_classe.hpp"

//std
#include <vector>

//intern include
#include "random_uniform_int.hpp"

Classe pick_a_random_classe()
{
    std::vector<Classe> classes = {
        Classe("Archer", "Distance"),
        Classe("Barbare", "Mélée"),
        Classe("Paladin", "Tank"),
        Classe("Mage", "Magie"),
    };

    return classes[random_uniform_int(0, classes.size() - 1)];
}
