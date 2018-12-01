/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pokemons.cpp
 * Author: sukumar
 * 
 * Created on July 5, 2018, 6:52 PM
 */

#include "Pokemons.h"
#include <string>
#include <iostream>

using namespace std;

    

    Pokemons :: pokemonStat(string nm, int tp1, int tp2, int hp, int atk, int def, int satk, int sdef, int spd) {

        pokemonName      = nm;
        pokemonType1     = static_cast<POKEMONTYPE>(tp1);
        pokemonType2     = static_cast<POKEMONTYPE>(tp2);
        pokemonHP        = hp;
        pokemonAttack    = atk;
        pokemonDefence   = def;
        pokemonSPAttack  = satk;
        pokemonSPDefence = sdef;
        pokemonSpeed     = spd;
        }
        
    int Pokemons :: showStats() {
        
        cout << "Pokemon Name      : " << pokemonName << endl;
        cout << "Pokemon's 1st Type: " << pokemonType1 << endl;
        cout << "Pokemon's 2nd Type: " << pokemonType2 << endl;
        cout << "HP                : " << pokemonHP << endl;
        cout << "Attack            : " << pokemonAttack << endl;
        cout << "Defence           : " << pokemonDefence << endl;
        cout << "Sp.Attack         : " << pokemonSPAttack << endl;
        cout << "Sp.Defence        : " << pokemonSPDefence << endl;
        cout << "Speed             : " << pokemonSpeed << endl;
        
        return 0;
        }
  