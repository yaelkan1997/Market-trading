//
// Created by ise on 12/28/21.
//

#ifndef ASSIGNMENT4_SHEEPFARM_H
#define ASSIGNMENT4_SHEEPFARM_H
#include "Farm.h"
#include "Sheep.h"
#include <string>
class sheepFarm : public Farm{
public:
    sheepFarm();
    virtual bool buyMilk(){return true;}
    virtual bool buyWool(){return false;};
    virtual bool buyEgg(){return false;}
    virtual bool sellMilk(){return false;}
    virtual bool sellWool(){return true;}
    virtual bool sellEgg() {return false;}
    virtual bool addOtherClient(Farm* other);
    virtual void addMeClient(Farm* other);
    virtual void PrintMarket(int otherId,int Price);
    virtual void buyAnimals();
    virtual void printfarm();
    virtual ~sheepFarm();
};


#endif //ASSIGNMENT4_SHEEPFARM_H
