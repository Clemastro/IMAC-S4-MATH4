#include <iostream>
#include "Random/random_classe.hpp"

int main()
{
    bool   stop = false;
    char   ans;
    Classe classe;
    while (!stop) {
        classe = pick_a_random_classe();
        std::cout << classe << std::endl;

        std::cout << "Dice ? (O/n)\n";
        std::cin >> ans;
        if (ans == 'n') {
            stop = true;
        }
    }
}