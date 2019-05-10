//
// Created by utec on 10/05/19.
//

#ifndef PC2POOALONSO_ARENA_H
#define PC2POOALONSO_ARENA_H

#include <vector>
#include <string>
#include "Fighter.h"
#include "Fight.h"


class Arena {
private:
    std::vector<Fight> Lista_del_Domo;
public:
    Arena()=default;

    void run(Fighter* A, Fighter* B);
    std::vector<Fight> get_fights();
    //void load_fights(Fight COMBATE);
    void run_all();


};


#endif //PC2POOALONSO_ARENA_H
