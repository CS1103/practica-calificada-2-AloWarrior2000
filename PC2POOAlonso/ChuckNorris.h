//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_CHUCKNORRIS_H
#define PC2POOALONSO_CHUCKNORRIS_H


#include "Fighter.h"

class ChuckNorris: public Fighter{
public:
    explicit ChuckNorris(std::string myname, std::vector<Attack*> A, std::vector<Defense*> D):Fighter(myname, A, D){};
};


#endif //PC2POOALONSO_CHUCKNORRIS_H
