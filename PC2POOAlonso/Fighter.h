//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_FIGHTER_H
#define PC2POOALONSO_FIGHTER_H


#include <vector>
#include <string>
#include "Attack.h"
#include "Defense.h"

class Fighter {
public:
    std::string name;
    std::vector<Attack*> ataque;
    std::vector<Defense*> defensa;

    explicit Fighter(std::string nombre, std::vector<Attack*> A, std::vector<Defense*> D){ name = nombre; ataque = A; defensa = D;};

    int attack();
    int defense();

};


#endif //PC2POOALONSO_FIGHTER_H
