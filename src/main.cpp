#include <iostream>
#include "Characters/hero.hpp"

int main()
{
    bool stop = false;
    char ans;
    while (!stop) {
        Hero hero;
        std::cout << hero << std::endl;

        std::cout << "Dice ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}