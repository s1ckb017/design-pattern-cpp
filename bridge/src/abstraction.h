#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include <iostream>
#include "implementor.h"

class abstraction{
public:
    abstraction(implementor *i) : impl(i){}
    virtual void printfromhere() = 0;
protected:
    implementor * impl;
};


#endif
