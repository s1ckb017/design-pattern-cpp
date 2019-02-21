#ifndef CONCRETEIMPLEMENTOR_H
#define CONCRETEIMPLEMENTOR_H

#include <iostream>
#include "implementor.h"

using namespace std;
class concreteImplementor : public implementor{
public:
    void print();
};

void concreteImplementor::print(){
    cout << "printed" << endl;
}

#endif
