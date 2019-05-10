//
// Created by utec on 10/05/19.
//

#include "Arena.h"


void Arena::run(Fighter* A, Fighter* B){
    Fight Pelea_aux(A,B);
    Lista_del_Domo.push_back(Pelea_aux);
    Pelea_aux.execute();
}


//void Arena::load_fights(Fight COMBATE) {
//    Lista_del_Domo.push_back(COMBATE);
//}

std::vector<Fight> Arena::get_fights() {
    return Lista_del_Domo;
}

void Arena::run_all() {
    for (Fight n : Lista_del_Domo)
        run(n.Primero , n.Segundo);
}