/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sukumar
 * 
 * Extremely Buggy!
 * 
 * Created on July 3, 2018, 6:56 PM
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include "Pokemons.h"
#include "PokemonMoves.h"
#include "ChoosePokemon.h"
#include<random>

using namespace std; 

userpokemon ypkm;
userpokemon opkm;

int myTotalDamage = 0;
int totalDamage = 0;


void OpponentAttack();
void PokemonBattle();



int damageCounter() {
    
    if (totalDamage >= opkm.uhp) {
        cout << opkm.uname << " fainted! \n" << endl;
    }
    else {
        OpponentAttack();
    }
}

int myDamageCounter() {
    if (myTotalDamage >= ypkm.uhp) {
        cout << ypkm.uname << " fainted! You flee to a Pokemon Center.\n" << endl;
    }
    else {
        
        PokemonBattle();
    }
    
}

int opponentAttackDamage(int damage) {
    damage = ((damage *((opkm.uatk+100)/ypkm.udef))/2)+2;
    int x = ypkm.uhp - myTotalDamage;
    myTotalDamage += damage;
    
    if (damage <= x) {
        x = x - damage;
    }
    else {
        x = 0;
    }
    cout << opkm.uname << " did " << damage << " damage! " << ypkm.uname << " has " << x << " HP left!" << endl;
    cout << "-------------------------------------------------------------------\n" << endl;
    myDamageCounter();
}

int UserAttackDamage(int damage) {
    damage = ((damage *((ypkm.uatk+100)/(opkm.udef+50))))+2;
    
    int y = opkm.uhp - totalDamage;
    totalDamage += damage;
    
    if (damage <= y) {
        y = y - damage;
    }
    else {
        y = 0;
    }
    cout << ypkm.uname << " did " << damage << " damage! " << opkm.uname << " has " << y << " HP left!" << endl;
    cout << "-------------------------------------------------------------------\n" << endl;
    damageCounter();
}

void PokemonBattle() {   
            random_device rd;
            mt19937 mersenne(rd());
            uniform_int_distribution<> acc(1, 100);
            
            PkmMove move1 = choosemove(ypkm.move1);
            PkmMove move2 = choosemove(ypkm.move2);
            PkmMove move3 = choosemove(ypkm.move3);
            PkmMove move4 = choosemove(ypkm.move4);

            
            int userAttack;
            cout << "|--------------------------|--------------------------------|" << endl;
            cout << "| What should " << ypkm.uname << "     " << move1.moveName << "(1)     " << move2.moveName <<  "(2) " << endl;
            cout << "| do?                        " << move3.moveName << "(3)    " << move4.moveName << "(4) " << endl;
            cout << "|--------------------------|--------------------------------|\n" << endl;
            cin >> userAttack;
            
            cout << "-------------------------------------------------------------------" << endl;
            switch(userAttack) {
                case 1:{
                    
                    cout << ypkm.uname << " used " << move1.moveName << "! \n";
                    if (acc(mersenne) > 100 - move1.moveAccuracy) {
                        UserAttackDamage(move1.movePower);
                    }
                    else {
                        cout << ypkm.uname << "'s attack missed!\n";
                        OpponentAttack();
                    }
                    break;
                }
                case 2:{
                    cout << ypkm.uname << " used " << move2.moveName << "! \n";
                    if (acc(mersenne) > 100 - move2.moveAccuracy) {
                        UserAttackDamage(move2.movePower);
                    }
                    else {
                        cout << ypkm.uname << " attack missed!\n";
                       OpponentAttack();
                    }
                    break;
                }
                case 3:{
                    cout << ypkm.uname << " used " << move3.moveName << "! \n";
                    if (acc(mersenne) > 100 - move3.moveAccuracy) {
                        UserAttackDamage(move3.movePower);
                    }
                    else {
                        cout << ypkm.uname << " attack missed!\n";
                        OpponentAttack();
                    }
                    break;
                }
                case 4:{
                    cout << ypkm.uname << " used " << move4.moveName << "! \n";
                    if (acc(mersenne) > 100 - move4.moveAccuracy) {
                        UserAttackDamage(move4.movePower);
                    }
                    else {
                        cout << ypkm.uname << " attack missed!\n";
                        OpponentAttack();
                    }
                    break;
                }
                default:{
                    cout << "That is not an attack! Please select either 1,2,3 or 4 dumbass!\n";
                    PokemonBattle();
                    break;
                }
            }
            
        cout << "-------------------------------------------------------------------\n" << endl;
        
            
    }


void OpponentAttack() {
    
    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> acc(1, 100);
    int opponentMove = acc(mersenne);
    cout << "-------------------------------------------------------------------" << endl;
    if (opponentMove <= 25) {
        
        cout << opkm.uname << " used SolarBeam!" << endl;
        if (acc(mersenne) > 25) {
            opponentAttackDamage(10);
        }
        else {
            cout << opkm.uname << "but it missed!" << endl;
            PokemonBattle();
        }
    }
    else if (25 < opponentMove && opponentMove <= 50) {
        cout << opkm.uname << " used Earthquake!" << endl;
        if (acc(mersenne) > 10) {
            opponentAttackDamage(5);
        }
        else {
            cout << opkm.uname << " attack missed!\n" << endl;
            PokemonBattle();
        }
    }
    else if (50 < opponentMove && opponentMove <= 75) {
        cout << opkm.uname << " used Hidden Power!" << endl;
        if (acc(mersenne) > 25) {
            opponentAttackDamage(10);
        }
        else {
            cout << opkm.uname << " attack missed!\n" << endl;
            PokemonBattle();
        }
    }
    else {
        cout << opkm.uname << " used Sludge Bomb!" << endl;
        if (acc(mersenne) > 50) {
            opponentAttackDamage(20);
        }
        else {
            cout << opkm.uname << " attack missed!\n" << endl;
            PokemonBattle();
       }
    }
    cout << "-------------------------------------------------------------------\n" << endl;
}


int main(){

    int opokemonnumber;
    int pokemonnumber;
    
    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> chooseopkm(1, 9);
    
    opokemonnumber = chooseopkm(mersenne);
    opkm = choosePokemon(opokemonnumber);
    
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Opposition trainer sent out " << opkm.uname << "!" << endl;
    cout << "-------------------------------------------------------------------\n" << endl;
    PokemonSprite(opokemonnumber);
    
    cout << "-------------------------------------------------------------------" << endl;
    cout << "choose your pokemon! " << endl;
    cout << "-------------------------------------------------------------------\n" << endl;
    cin >> pokemonnumber;
    
    ypkm = choosePokemon(pokemonnumber);
    cout << "\n-------------------------------------------------------------------" << endl;
    cout << ypkm.uname << "! I choose you!" << endl;
    cout << "-------------------------------------------------------------------\n" << endl;
    PokemonSprite(pokemonnumber);
    //cout << opkm.uhp << " - " << ypkm.uhp << endl;
     
    
    PokemonBattle();
    return 0;

    }