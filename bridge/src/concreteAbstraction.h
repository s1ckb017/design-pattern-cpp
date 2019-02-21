#ifndef CONCRETEABSTRACTION_H
#define CONCRETEABSTRACTION_H

#include <iostream>
#include "abstraction.h"
#include "implementor.h"

using namespace std;

class concreteabstraction : public abstraction{
public:
    concreteabstraction(implementor *i):abstraction(i){}
    void printfromhere();
};

void concreteabstraction::printfromhere(){
    impl->print();
}

#endif
