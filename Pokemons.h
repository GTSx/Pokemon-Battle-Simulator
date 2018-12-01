/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pokemons.h
 * Author: sukumar
 *
 * Created on July 5, 2018, 6:52 PM
 */

#ifndef POKEMONS_H
#define POKEMONS_H
#include <string>
#include <iostream>

using namespace std;

enum POKEMONTYPE{
        
        POKEMONTYPE_NONE,
        POKEMONTYPE_BUG,
        POKEMONTYPE_DRAGON,
        POKEMONTYPE_ICE,
        POKEMONTYPE_FIGHTING,
        POKEMONTYPE_FIRE,
        POKEMONTYPE_FLYING,
        POKEMONTYPE_GRASS,
        POKEMONTYPE_GHOST,
        POKEMONTYPE_GROUND,
        POKEMONTYPE_ELECTRIC,
        POKEMONTYPE_NORMAL,
        POKEMONTYPE_POISON,
        POKEMONTYPE_PYSCHIC,
        POKEMONTYPE_ROCK,
        POKEMONTYPE_WATER,
    };
    
class Pokemons {
    
public:
        string pokemonName;
        int pokemonType1;
        int pokemonType2;
        int pokemonHP;
        int pokemonAttack;
        int pokemonDefence;
        int pokemonSPAttack;
        int pokemonSPDefence;
        int pokemonSpeed;
       
        
        


    
    pokemonStat(string nm, int tp1, int tp2, int hp, int atk, int def, int satk, int sdef, int spd);
    int showStats();
    void PokemonSprite(int pokemonSprite);
    
};

#endif /* POKEMONS_H */

