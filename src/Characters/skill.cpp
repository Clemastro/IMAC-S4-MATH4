#include "skill.hpp"

//std
#include <string>

//intern include
#include "../Random/random_int.hpp"

Skill::Skill(std::string _name, std::string _type)
    : name(_name), type(_type)
{
    degat = randomInt(0, 10);
}

Skill::Skill(std::string _name, std::string _type, int _degat)
    : name(_name), type(_type), degat(_degat)
{
}
