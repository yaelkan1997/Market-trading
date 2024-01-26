//
// Created by ise on 12/28/21.
//

#include "cowFarm.h"
#include <iostream>
using namespace std;

cowFarm::cowFarm() : Farm(){
    for(int i=0 ; i<3; i++){
        AnimalArray.push_back(new Cow);
    }
    PriceOfAnimal=Cow::getPrice();
    price = 3;
}

bool cowFarm::addOtherClient(Farm *other) {
    if(other->buyMilk()){
        Clients.push_back(other);
        cout<< "Cow farm(" << ID << ") Added Sheep farm("<< other->getID()<< ") to his client list"<<endl;
        return true;
    }
    return false;

}

void cowFarm::buyAnimals() {
    int animalPrice = PriceOfAnimal;
    int numOfCows =0;
    while(Money>=animalPrice){
        AnimalArray.push_back(new Cow);
        numOfCows++;
        Money = Money-animalPrice;
    }
    if(numOfCows>0){
        cout << "Cow farm("<<ID<<") bought "<<numOfCows<<" cows for "<<numOfCows*animalPrice<<" dollars"<<endl;
    }


}

void cowFarm::printfarm() {
    cout<<"Farm Id: "<<ID<<", type: Cow farm, Money: "<<Money<<", Animals: "<<AnimalArray.size()<<" cows, Products: Milk["<<products<<"], Wool[0], Eggs["<<numOfPurcheses<<"]"<<endl;
}

void cowFarm::addMeClient(Farm *other) {
    if(other->sellEgg()){
        other->addOtherClient(this);
    }
}

void cowFarm::PrintMarket(int otherId, int Price) {
    cout<<"Cow farm("<<ID<<") bought "<<numOfPurchesesEachSell<<" eggs for "<<Price*numOfPurchesesEachSell<<" dollars from Chicken farm("<<otherId<<")"<<endl;
    numOfPurchesesEachSell =0;
}

cowFarm::~cowFarm() {
    for(int i=0; i<AnimalArray.size();i++){
        delete(AnimalArray[i]);
    }
}

