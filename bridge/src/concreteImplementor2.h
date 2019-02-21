#ifndef CONCRETEIMPLEMENTOR2_H
#define CONCRETEIMPLEMENTOR2_H

#include <iostream>
#include "implementor.h"

using namespace std;

class concreteImplementor2 : public implementor{
public:
    void print();
};

void concreteImplementor2::print(){
    cout << "printed 2" << endl;
}

#endif
