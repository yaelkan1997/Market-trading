//
// Created by ise on 12/29/21.
//

#include "chickenFarm.h"
#include "Animal.h"
chickenFarm::chickenFarm() : Farm(){
    for(int i=0 ; i<3; i++){
        AnimalArray.push_back(new Chicken);
    }
    PriceOfAnimal=Chicken::getPrice();
    price=1;
}
bool chickenFarm::addOtherClient(Farm *other) {
    if(other->buyEgg()){
        Clients.push_back(other);
        cout << "Chicken farm(" << ID << ") Added Cow farm(" << other->getID()<< ") to his client list"<<endl;
        return true;
    }
    return false;
}


void chickenFarm::buyAnimals() {
    int animalPrice =PriceOfAnimal;
    int numOfChicken =0;
    while(Money>=animalPrice){
        AnimalArray.push_back(new Chicken);
        Money = Money-animalPrice;
        numOfChicken++;
    }
    if(numOfChicken>0){
        cout << "Chicken farm("<<ID<<") bought "<<numOfChicken<<" chickens for "<<numOfChicken*animalPrice<<" dollars"<<endl;
    }

}


void chickenFarm::printfarm() {

    cout<<"Farm Id: "<<ID<<", type: Chicken Farm, Money: "<<Money<<", Animals: "<<AnimalArray.size()<<" chickens, Products: Milk[0], Wool["<<numOfPurcheses<<"], Eggs["<<products<<"]"<<endl;
}

void chickenFarm::addMeClient(Farm *other) {
    if(other->sellWool()){
        other->addOtherClient(this);
    }
}

void chickenFarm::PrintMarket(int otherId, int Price) {
    cout<<"Chicken farm("<<ID<<") bought "<<numOfPurchesesEachSell<<" wool for "<<Price*numOfPurchesesEachSell<<" dollars from Sheep farm("<<otherId<<")"<<endl;
    numOfPurchesesEachSell =0;
}

chickenFarm::~chickenFarm() {
    for(int i=0; i<AnimalArray.size();i++){
        delete(AnimalArray[i]);
    }
}
