//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_FIGHT_H
#define PC2POOALONSO_FIGHT_H


#include <iostream>
#include "Fighter.h"

class Fight {

public:
    Fighter* Primero;
    Fighter* Segundo;
    Fighter* Winner;
    int score1, score2;

    Fight(Fighter* First, Fighter* Second);

    void execute();
};


#endif //PC2POOALONSO_FIGHT_H
