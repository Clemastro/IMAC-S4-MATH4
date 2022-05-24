#include "party_loop.hpp"

//std
#include <iomanip>
#include <sstream>

//intern include
#include "../Characters/hero.hpp"
#include "../Characters/vilain.hpp"
#include "get_input_from_user.hpp"
#include "player_turn.hpp"
#include "vilain_turn.hpp"

void party_loop()
{
    //Create the Hero
    Hero hero;

    //create first vilain
    Vilain vilain(0, 0.9);

    bool stop_the_game = false;
    while (!stop_the_game) {
        //display stats
        cout_Characters(hero, vilain);
        std::cout << std::endl;

        //player-turn
        player_turn(hero, vilain);
        std::cout << std::endl;
        if (vilain.is_dead()) {
            std::cout << "You defeat vilain n°" << hero.getLevel() << " !\n";
            std::cout << "You level up ! LEVEL " << hero.getLevel() << " --> LEVEL " << hero.getLevel() + 1;
            hero.levelUP();
            std::cout << "\nA new Vilain appear !\n";
            Vilain new_vilain(hero.getLevel(), 0.6);
            vilain = new_vilain;
        }

        //Vilain turn
        else {
            std::cout << std::endl;
            vilain_turn(hero, vilain);
            if (hero.is_dead()) {
                std::cout << "Oh noo ! The vilain defeat you !\n";
                cout_Characters(hero, vilain);
                std::cout << "\nYou reach the level " << hero.getLevel() << std::endl;
                std::cout << "Do you want to play again ? (y/n)\n";
                char cmd = get_input_from_user<char>();
                if (cmd == 'y') {
                    Hero new_hero;
                    hero = new_hero;
                    Vilain new_vilain(0, 0.3);
                    vilain = new_vilain;
                }
                else {
                    std::cout << "Bye bye\n";
                    stop_the_game = true;
                }
            }
        }
    }
}

void cout_Characters(Hero hero, Vilain vilain)
{
    int space_between = 17;
    //level size
    int level_size = 1;
    if (hero.getLevel() >= 10) {
        level_size = 2;
        if (hero.getLevel() >= 100) {
            level_size = 3;
        }
    }

    //PV size
    int pv_size = 1;
    if (hero.getPV() >= 10) {
        pv_size = 2;
        if (hero.getPV() >= 100) {
            pv_size = 3;
            if (hero.getPV() >= 1000) {
                pv_size = 4;
            }
        }
    }

    //PM size
    int pm_size = 1;
    if (hero.getPM() >= 10) {
        pm_size = 2;
        if (hero.getPM() >= 100) {
            pm_size = 3;
            if (hero.getPM() >= 1000) {
                pm_size = 4;
            }
        }
    }

    std::cout << "Your Hero :" << std::setw(space_between + 3) << "Vilain n°" << hero.getLevel() << ":\n";
    std::cout << "LEVEL : " << hero.getLevel() << std::setw(space_between + (4 - level_size)) << "LEVEL : " << vilain.getLevel() << std::endl;
    std::cout << "PV    : " << hero.getPV() << std::setw(space_between + (4 - pv_size)) << "PV    : " << vilain.getPV() << std::endl;
    std::cout << "PM    : " << hero.getPM() << std::setw(space_between + (4 - pm_size)) << "DEGAT : " << vilain.getDEG() << std::endl;
    std::cout << "CLASSE: " << hero.getClasse().getName() << std::endl;
}