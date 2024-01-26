//
// Created by ise on 12/28/21.
//

#ifndef ASSIGNMENT4_MARKET_H
#define ASSIGNMENT4_MARKET_H
//#include "Market.h"
#include "sheepFarm.h"
#include "cowFarm.h"
#include "chickenFarm.h"
#include <cstring>
#include <iostream>
#include <ostream>
using namespace std;

class Market {
private:
    int years;
    vector<Farm*> AllFarms;
public:
    Market(){years =0;}
    int getYear() const {return years;}
    void insertNewFarms();
    void market();
    void printMarketFarms();
    void nextYear();
    void fastForwardYears();
    ~Market();
};
#endif //ASSIGNMENT4_MARKET_H
