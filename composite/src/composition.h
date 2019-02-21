#ifndef COMPOSITION_H
#define COMPOSITION_H

#include <iostream>
#include <vector>
#include "component.h"

using namespace std;

class composition : public component{
public:
    void dothis();
    void addElement(component* c);
private:
    vector<component*> nodi;
};

void composition::dothis(){
    for (int i=0; i < nodi.size(); i++){
        nodi[i]->dothis();
    }
}

void composition::addElement(component* c){
    nodi.push_back(c);
}

#endif
