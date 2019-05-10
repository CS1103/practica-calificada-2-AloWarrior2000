//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_JASONSTATHAM_H
#define PC2POOALONSO_JASONSTATHAM_H


#include "Fighter.h"

class JasonStatham: public Fighter{
public:
    explicit JasonStatham(std::string myname, std::vector<Attack*> A, std::vector<Defense*> D):Fighter(myname, A, D){};
};


#endif //PC2POOALONSO_JASONSTATHAM_H
