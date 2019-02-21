#ifndef ELEMENTOA_H
#define  ELEMENTOA_H

#include <iostream>
#include "element.h"
#include "visitor.h"

using namespace std;

/*
    nodoA con dei suoi attributi ed un operazione, ovviamente le operazioni possono
    essere svariate o si può avere una sola operazione che esegue le altre.
    nodoA sarà parte di object structure.
*/

class elementoA : public element{
public:
    elementoA(string c, string d) : a(c), b(d){}
    void accept(visitor* v);
    void add();

private:
    string a;
    string b;
};

void elementoA::accept(visitor* v){
    v->visit(this);
}

void elementoA::add(){
    cout << a << " " << b << endl;
}

#endif
