//
// Created by ise on 12/28/21.
//
#include <string>
#include <iostream>
#include "Farm.h"
using namespace std;
using std::cout;
int Farm::TimeCreated =1;

Farm::Farm() {
    Money = 10;
    ID = getTimeCreated();
    TimeCreated++;
    products=0;
    numOfPurcheses=0;
    numOfPurchesesEachSell =0;


}

void Farm::Products() {
    int size = AnimalArray.size();
    for (int i=0; i< size; i++){
        products = AnimalArray[i]->getAge()+products;
    }

}

void Farm::AddYearsToAge() {
    for (int i = 0; i < AnimalArray.size(); i++) {
        AnimalArray[i]->AddYearsToAnimal();
    }
}


void Farm::buyProductFarm() {
    for (int i = 0; i < Clients.size(); i++) {
        while (products > 0 && Clients[i]->sellOurProduct(price)) {
            products--;
            Money = Money + price;
            if(products<=0 || Clients[i]->Money < price){
                Clients[i]->PrintMarket(ID,price);
            }
        }
    }
}

bool Farm::sellOurProduct(int Price) {
    if (Money>=Price) {
        numOfPurchesesEachSell++;
        numOfPurcheses++;
        Money = Money -Price;
        return true;
    }
    return false;
}

void Farm::setMoney() {
    Money = Money+10;
}

void Farm::CheckAnimalAge() {
    int num = 0;
    int AnimalSize = AnimalArray.size();
    for (int i = 0; i < AnimalSize; i++) {
        if (AnimalArray[i]->getAge() == AnimalArray[i]->getDeadAge()) {
            num++;
        }
    }
    for (int j = 0; j < num; j++) {
        delete(AnimalArray[0]);
        AnimalArray.erase(AnimalArray.begin() + 0);

    }

}


