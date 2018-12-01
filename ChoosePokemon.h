/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChoosePokemon.h
 * Author: sukumar
 *
 * Created on July 6, 2018, 8:18 PM
 */

#ifndef CHOOSEPOKEMON_H
#define CHOOSEPOKEMON_H
#include <string>


struct userpokemon {
    
    string uname;
    int utyp1;
    int utyp2;
    int uhp;
    int uatk;
    int udef;
    int uspatk;
    int uspdef;
    int uspd;
    int move1;
    int move2;
    int move3;
    int move4;
    };
    
userpokemon choosePokemon(int pkmnum);
void PokemonSprite(int pokemonSprite);



#endif /* CHOOSEPOKEMON_H */

