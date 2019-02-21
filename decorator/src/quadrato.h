#ifndef QUADRATO_H
#define QUADRATO_H

#include <iostream>
#include "polygon.h"

/* concreteComponent implement polygon */
using namespace std;

class quadrato : public polygon{
public:
    quadrato(int lato) : l(lato){}
    void draw();
private:
    int l;
};

void quadrato::draw(){
    cout << "Questo è un quadrato di lato: " << l << endl;
}

#endif
