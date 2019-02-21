#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

/*
    Interface of element
*/
class visitor;

class element{
public:
    virtual void accept(visitor* v) = 0;
};

#endif
