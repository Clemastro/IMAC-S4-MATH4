#include "skill.hpp"

//std
#include <string>

//intern include
#include "../Random/random_uniform_int.hpp"

Skill::Skill()
{
    name  = "none";
    type  = "none";
    degat = -1;
}

Skill::Skill(std::string _name, std::string _type)
    : name(_name), type(_type)
{
    degat = random_uniform_int(0, 10);
}

Skill::Skill(std::string _name, std::string _type, int _degat, int _conso_pm)
    : name(_name), type(_type), degat(_degat), conso_pm(_conso_pm)
{
}
