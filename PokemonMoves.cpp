/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PokemonMoves.cpp
 * Author: sukumar
 * 
 * Created on July 5, 2018, 8:00 PM
 */

#include "PokemonMoves.h"
#include "Pokemons.h"
#include<iostream>
#include<string>

using namespace std;

PkmMove choosemove(int moveno) {

        PkmMove move;
        
        switch(moveno){
            
            case 1:{        //Tackle
              
                move = {"Tackle", 11, 50, 99};
                return move;
        }
            
            case 2:{        //Vine Whip
              
                move = {"Vine Whip", 7, 45, 99};
                return move;
        }  
        
        case 3:{        //Razor Leaf
              
                move = {"Razor Leaf", 7, 55, 95};
                return move;
        }
        
        case 4:{        //Sludge
              
                move = {"Sludge", 12, 65, 99};
                return move;
        }

}
}



