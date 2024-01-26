//
// Created by ise on 12/29/21.
//

#ifndef ASSIGNMENT4_CHICKENFARM_H
#define ASSIGNMENT4_CHICKENFARM_H
#include "Farm.h"
#include "Chicken.h"
#include <string>
class chickenFarm : public Farm{
public:
    chickenFarm();
    virtual bool buyMilk(){return false;}
    virtual bool buyWool(){return true;}
    virtual bool buyEgg(){return false;}
    virtual bool sellMilk(){return false;}
    virtual bool sellWool(){return false;}
    virtual bool sellEgg() {return true;}
    virtual bool addOtherClient(Farm* other);
    virtual void addMeClient(Farm* other);
    virtual void buyAnimals();
    virtual void printfarm();
    virtual void PrintMarket(int otherId,int Price);
    virtual ~chickenFarm();
};



#endif //ASSIGNMENT4_CHICKENFARM_H
