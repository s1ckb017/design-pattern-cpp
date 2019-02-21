#ifndef ELEMENTOB_H
#define ELEMENTOB_H

#include <iostream>
#include "visitor.h"

using namespace std;

/*
    nodoB con dei suoi attributi ed un operazione, ovviamente le operazioni possono
    essere svariate o si può avere una sola operazione che esegue le altre.
    nodoB sarà parte di object structure.
*/

class element;

class elementoB : public element {
public:
    elementoB(int c, int d) : a(c), b(d){}
    void accept(visitor* v);
    void add();
private:
    int a;
    int b;
};

void elementoB::accept(visitor* v){
    v->visit(this);
}

void elementoB::add(){
    cout << a + b << endl;
}

#endif
