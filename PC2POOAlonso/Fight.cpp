//
// Created by utec on 10/05/19.
//

#include "Fight.h"


Fight::Fight(Fighter* First, Fighter* Second){
    Primero = First;
    Segundo = Second;
    Winner = nullptr;
    score1 = 0;
    score2 = 0;
}

void Fight::execute() {
    int atq1 = Primero->attack();
    int atq2 = Segundo->attack();
    int def1 = Primero->defense();
    int def2 = Segundo->defense();

    score1 = def1 -atq2;
    score2 = def2 - atq1;
    if (score1 < score2)
        Winner = Segundo;
    else if (score1 > score2)
        Winner = Primero;
    std::cout << Winner->name;

}