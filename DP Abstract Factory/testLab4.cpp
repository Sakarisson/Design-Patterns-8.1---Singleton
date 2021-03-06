/*
   File:        testLab4.cpp
   Objective:	Designmönster DT063G - Abstract Factory
   Last change: feb 2014 / Orjan Sterner
*/

#include <vector>
#include <iostream>
#include <cstdlib>
#include "Game.h"
#include "NiceGameFactory.h"
#include "NastyGameFactory.h"

using std::cin;

int main() {

    int choice;
    bool keepOn = true;


    while(keepOn) {
        GameFactory *gf = nullptr;
        cout << "Choose your game:" << endl;
        cout << "1 - Nice game" << endl;
        cout << "2 - Nasty game" << endl;
        cout << "3 - quit" << endl;

        while(!(cin >> choice) || choice <1 || choice >3) {
          cin.clear();
          cin.ignore(cin.rdbuf()->in_avail());
        }

        switch(choice) {
        case 1:  gf = NiceGameFactory::getInstance(); break;
          case 2:  gf = NastyGameFactory::getInstance(); break;
          case 3: keepOn=false;
        }

        if(keepOn) {
          Game game(gf);
          game.play();
        }
    } // while

    return 0;
}


