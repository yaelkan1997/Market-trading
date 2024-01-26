//
// Created by ise on 12/28/21.
//

#include "sheepFarm.h"

sheepFarm::sheepFarm() : Farm(){
    for(int i=0 ; i<3; i++){
        AnimalArray.push_back(new Sheep);
    }
    PriceOfAnimal = Sheep::getPrice();
    price = 2;
}
bool sheepFarm::addOtherClient(Farm *other) {
    if(other->buyWool()){
        Clients.push_back(other);
        cout << "Sheep farm(" << to_string(ID) << ") Added Chicken farm(" << to_string(other->getID()) << ") to his client list"<<endl;
        return true;
    }
    return false;
}



void sheepFarm::buyAnimals() {
    int animalPrice = PriceOfAnimal;
    int numOfSheep =0;
    while(Money>=animalPrice){
        AnimalArray.push_back(new Sheep);
        Money = Money-animalPrice;
        numOfSheep++;
    }
    if(numOfSheep>0){
        cout << "Sheep farm("<<ID<<") bought "<<to_string(numOfSheep)<<" sheeps for "<<to_string(numOfSheep*animalPrice)<<" dollars"<<endl;
    }

}

void sheepFarm::printfarm() {
    cout<<"Farm Id: "<<ID<<", type: Sheep farm, Money: "<<Money<<", Animals: "<<AnimalArray.size()<<" sheep, Products: Milk["<<numOfPurcheses<<"], Wool["<<products<<"], Eggs[0]"<<endl;

}

void sheepFarm::addMeClient(Farm *other) {
    if(other->sellMilk()){
        other->addOtherClient(this);
    }
}

void sheepFarm::PrintMarket(int otherId, int Price) {
    cout<<"Sheep farm("<<ID<<") bought "<<numOfPurchesesEachSell<<" milk for "<<Price*numOfPurchesesEachSell<<" dollars from Cow farm("<<otherId<<")"<<endl;
    numOfPurchesesEachSell =0;
}

sheepFarm::~sheepFarm() {
    for(int i=0; i<AnimalArray.size();i++){
        delete(AnimalArray[i]);
    }
}
