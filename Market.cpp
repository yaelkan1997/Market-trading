//
// Created by ise on 12/28/21.
//

#include "Market.h"
#include "Exception.h"
#include <iostream>
using namespace std;
void Market::nextYear() {
    insertNewFarms();
    market();
}

void Market::fastForwardYears() {
    int numOfYears;
    cout << "How many years to fast forward?" << endl;
    cin >> numOfYears;
    for (int i = 0; i < numOfYears; i++) {
        market();
    }
}

void Market::insertNewFarms() {
    cout << "----Creating new farms----" << endl;
    int numOfCowFarms;
    int numOfSheepFarms;
    int numOfChickenFarms;
    int flag =0;
    //cow farm add
    while (flag ==0) {

        cout << "How many new cow farms will be added this year?" << endl;
        cin >> numOfCowFarms;
        try {
            if (numOfCowFarms < 0) {
                throw ValidNumOfCow();

            }
        }
        catch (exception &e) {
            cout << e.what() << endl;
            continue;
        }
        //sheep farm add
        cout << "How many new sheep farms will be added this year?" << endl;
        cin >> numOfSheepFarms;

        try {
            if (numOfSheepFarms < 0) {
                throw ValidNumOfSheep();

            }
        }
        catch (exception &e) {
            cout << e.what() << endl;
            continue;
        }

        //Chicken farms add
        cout << "How many new chicken farms will be added this year?" << endl;
        cin >> numOfChickenFarms;
        try {
            if (numOfChickenFarms < 0) {
                throw ValidNumOfChicken();

            }
        }
        catch (exception &e) {
            cout << e.what() << endl;
            continue;
        }

        cout << "----Adding new farms to market----" << endl;
        for (int i = 0; i < numOfCowFarms; i++) {
            AllFarms.push_back(new cowFarm);
            for (int i = 0; i < AllFarms.size(); i++) {
                if (AllFarms[i]->addOtherClient(AllFarms[AllFarms.size() - 1])) {
                    continue;
                } else {
                    AllFarms[i]->addMeClient(AllFarms[AllFarms.size() - 1]);
                }

            }
        }
        for (int i = 0; i < numOfSheepFarms; i++) {
            AllFarms.push_back(new sheepFarm);
            for (int i = 0; i < AllFarms.size(); i++) {
                if (AllFarms[i]->addOtherClient(AllFarms[AllFarms.size() - 1])) {

                    continue;
                } else {
                    AllFarms[i]->addMeClient(AllFarms[AllFarms.size() - 1]);
                }

            }

        }
        for (int i = 0; i < numOfChickenFarms; i++) {
            AllFarms.push_back(new chickenFarm);
            for (int i = 0; i < AllFarms.size(); i++) {
                if (AllFarms[i]->addOtherClient(AllFarms[AllFarms.size() - 1])) {
                    continue;
                } else {
                    AllFarms[i]->addMeClient(AllFarms[AllFarms.size() - 1]);
                }

            }
        }

        flag =1;
    }
}
void Market::market() {
    int current = AllFarms.size();
    cout<<"----Begin Market----"<<endl;
    for(int i = 0;i<current;i++){
        AllFarms[i]->Products();
        AllFarms[i]->buyProductFarm();
    }


    cout<<"----Buy Animals----"<<endl;
    for(int i = 0;i<current;i++){
        AllFarms[i]->buyAnimals();
    }



    for(int i = 0;i<AllFarms.size();i++){
        AllFarms[i]->AddYearsToAge();
        AllFarms[i]->CheckAnimalAge();
        AllFarms[i]->setMoney();
    }
    years++;

}

void Market::printMarketFarms() {
    cout<<"----Market Farms----"<<endl;
    for(int i=0;i<AllFarms.size();i++){
        AllFarms[i]->printfarm();
    }
}

Market::~Market() {
    for(int i=0;i<AllFarms.size();i++){
        delete (AllFarms[i]);
    }
}




