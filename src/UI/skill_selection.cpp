#include "skill_selection.hpp"
#include "../UI/get_input_from_user.hpp"

Skill skill_selection(std::vector<Skill> skills)
{
    for (size_t i = 1; i < skills.size(); i++) {
        std::cout << " " << i << ": " << skills[i].getName() << "(" << skills[i].getDegat() << " DEG|" << skills[i].getConso() << " PM) |";
    }

    std::cout << "\n "
              << skills.size() << ": BACK\n";

    size_t cmd = get_input_from_user<int>();

    if (cmd > skills.size() || cmd < 1) {
        std::cout << "This skill doesn't exist\n";
        return skill_selection(skills);
    }
    if (cmd == skills.size()) {
        Skill none;
        return none;
    }
    else {
        return skills[cmd];
    }
}