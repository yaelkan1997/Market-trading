//
// Created by ise on 1/5/22.
//

#ifndef ASSIGNMENT4_EXCEPTION_H
#define ASSIGNMENT4_EXCEPTION_H
#include <exception>
using namespace std;

class ValidNumOfCow: public exception {
    virtual const char* what() const throw(){
        return "Insert valid number of cow farms";
    };

};

class ValidNumOfSheep: public exception {
    virtual const char* what() const throw(){
        return "Insert valid number of sheep farms";
    };

};

class ValidNumOfChicken: public exception {
    virtual const char* what() const throw(){
        return "Insert valid number of chicken farms";
    };

};



#endif //ASSIGNMENT4_EXCEPTION_H
