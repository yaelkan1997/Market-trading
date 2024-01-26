//
// Created by ise on 12/28/21.
//
#include "Animal.h"
#ifndef ASSIGNMENT4_FARM_H
#define ASSIGNMENT4_FARM_H


#include <vector>
#include <string>
class Farm{
private:

protected:
    int PriceOfAnimal;
    int ID;
    double Money;
    static int TimeCreated;
    vector<Animal*> AnimalArray;
    int products;
    int price;
    int numOfPurcheses;
    int numOfPurchesesEachSell;
    vector<Farm*> Clients;
public:
    Farm();
    void setMoney();
    int getID() const{return ID;}
    static int getTimeCreated() {return TimeCreated;}
    void Products();
    void buyProductFarm();
    bool sellOurProduct(int price);
    void CheckAnimalAge();
    virtual bool buyMilk() =0;
    virtual bool buyWool() = 0;
    virtual bool buyEgg() = 0;
    virtual bool sellMilk() =0;
    virtual bool sellWool() = 0;
    virtual bool sellEgg() = 0;
    virtual void buyAnimals()=0;
    virtual bool addOtherClient(Farm* other) =0;
    virtual void addMeClient(Farm* other) =0;
    void AddYearsToAge();
    virtual void printfarm()=0;
    virtual void PrintMarket(int otherId,int Price)=0;
    virtual ~Farm(){};
};
#endif //ASSIGNMENT4_FARM_H
