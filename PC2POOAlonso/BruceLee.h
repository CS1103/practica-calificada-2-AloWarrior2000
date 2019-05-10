//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_BRUCELEE_H
#define PC2POOALONSO_BRUCELEE_H


#include "Fighter.h"

class BruceLee: public Fighter{
public:
    explicit BruceLee(std::string myname, std::vector<Attack*> A, std::vector<Defense*> D):Fighter(myname, A, D){};
};


#endif //PC2POOALONSO_BRUCELEE_H
