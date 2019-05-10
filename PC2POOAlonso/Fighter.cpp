//
// Created by utec on 10/05/19.
//

#include "Fighter.h"
#include "Attack.h"
#include "Defense.h"



int Fighter::attack(){
    int totattack;
    for(Attack* n : ataque)
        totattack = n -> power;
    return totattack;
}

int Fighter::defense() {
    int totdefense;
    for(Defense* n : defensa)
        totdefense = n -> level;
    return totdefense;
}