#include <iostream>
#include "Random/Binomiale.hpp"
#include "Random/Exponentielle.hpp"
#include "Random/Geometry.hpp"
#include "Random/Normale.hpp"
#include "UI/get_input_from_user.hpp"
#include "UI/party_loop.hpp"

int main()
{
    bool stop = false;
    while (!stop) {
        std::cout << binomiale(1000, 0.5) << std::endl;

        std::cout << "redice ? (y/n)\n";
        char cmd = get_input_from_user<char>();
        if (cmd == 'n') {
            stop = true;
        }
    }
}