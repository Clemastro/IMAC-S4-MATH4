#include "menu.hpp"
#include <iostream>
#include "../Characters/hero.hpp"
#include "get_input_from_user.hpp"

void Dice()
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

void show_the_list_of_commands()
{
    std::cout << "What do you want to do?" << std::endl
              << "1: Dice" << std::endl
              << "q: Quit" << std::endl;
}

void menu()
{
    bool quit = false;
    while (!quit) {
        show_the_list_of_commands();
        const auto command = get_input_from_user<char>();
        switch (command) {
        case '1':
            Dice();
            break;
        case 'q':
            std::cout << "Bye !" << std::endl;
            quit = true;
            break;
        default:
            std::cout << "Sorry I don't know that command!" << std::endl;
            break;
        }
    }
}