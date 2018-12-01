/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PokemonMoves.h
 * Author: sukumar
 *
 * Created on July 5, 2018, 8:00 PM
 */

#ifndef POKEMONMOVES_H
#define POKEMONMOVES_H
#include<string>

using namespace std;

struct PkmMove {  
    
    string moveName;
    int moveType;
    int movePower;
    int moveAccuracy;
    
};

PkmMove choosemove(int moveno);

#endif /* POKEMONMOVES_H */

