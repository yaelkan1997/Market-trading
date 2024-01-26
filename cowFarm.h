//
// Created by ise on 12/28/21.
//

#ifndef ASSIGNMENT4_COWFARM_H
#define ASSIGNMENT4_COWFARM_H
#include "Farm.h"
#include "Cow.h"
#include "Animal.h"
#include <string>
class cowFarm: public Farm{
public:
    cowFarm();
    virtual bool buyMilk(){return false;}
    virtual bool buyWool(){return false;}
    virtual bool buyEgg(){return true;}
    virtual bool sellMilk(){return true;}
    virtual bool sellWool(){return false;}
    virtual bool sellEgg() {return false;}
    virtual bool addOtherClient(Farm* other);
    virtual void addMeClient(Farm* other);
    virtual void buyAnimals();
    virtual void printfarm();
    virtual void PrintMarket(int otherId,int Price);
    virtual ~cowFarm();
};
#endif //ASSIGNMENT4_COWFARM_H
