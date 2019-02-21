#ifndef LISTELEMENT_H
#define LISTELEMENT_H

#include <iostream>
#include <list>
#include "element.h"
#include "elementoA.h"
#include "elementoB.h"
/*
    objectstructure contiene vettore di elementi

*/

using namespace std;

class listElements{
public:
    listElements(){
        elementoA *a = new elementoA("ciao", "comba");
        elementoB *d = new elementoB(1,2);

        ve.push_back(a);
        ve.push_back(d);

    }

    ~listElements(){
        for(std::list<element*>::iterator it = ve.begin(); it != ve.end(); ++it ){
            delete (*it);
        }
    }

    list<element*> getVe(){return ve;}
private:
    list<element*> ve;
};


#endif
