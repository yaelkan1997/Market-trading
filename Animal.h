//
// Created by ise on 12/28/21.
//

#ifndef ASSIGNMENT4_ANIMAL_H
#define ASSIGNMENT4_ANIMAL_H
#include <cstring>
#include <iostream>
#include <ostream>
using namespace std;
class Animal{
protected:
    int Age;
    static int Price;
    double DeadAge;
public:
    Animal(int price,double deadAge);
    int getAge()const{return Age;}
    static int getPrice(){return Price;}
    double getDeadAge()const{return DeadAge;}
    void AddYearsToAnimal(){Age = Age+1;}
    virtual ~Animal(){};
    friend class Farm;
};
#endif //ASSIGNMENT4_ANIMAL_H
