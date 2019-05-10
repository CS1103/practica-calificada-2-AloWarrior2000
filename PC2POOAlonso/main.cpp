#include <iostream>
#include <vector>
#include "Arena.h"
#include "Attack.h"
#include "Defense.h"
#include "BruceLee.h"
#include "ChuckNorris.h"
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"
#include "Elude.h"
#include "Shield.h"
#include "Armor.h"

int main() {

    Arena Roma;
    std::vector<Attack*> atq_glad = {new Punch(), new Saber()};
    std::vector<Attack*> atq_Luch = {new Firearm(), new Punch()};
    std::vector<Defense*> def_glad = {new Elude(), new Shield()};
    std::vector<Defense*> def_Luch = {new Elude(), new Armor()};
    Fighter* Gladiador = new BruceLee("BruceLee", atq_glad, def_glad);
    Fighter* Luchador = new ChuckNorris("ChuckNorris", atq_Luch, def_Luch);
    Roma.run(Gladiador, Luchador);




    return 0;
}