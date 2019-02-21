#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include <iostream>
#include "visitor.h"
/*
    implementation of visitor
*/

class concreteVisitor : public visitor {
public:
    void visit(elementoA* cl);
    void visit(elementoB* cl);
};


void concreteVisitor::visit(elementoA* cl){
    cl->add();
}

void concreteVisitor::visit(elementoB* cl){
    cl->add();
}


#endif
