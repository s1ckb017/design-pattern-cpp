#ifndef CERCHIO_H
#define CERCHIO_H

#include <iostream>
#include "polygon.h"

/* concreteComponent implement polygon */
using namespace std;

class cerchio : public polygon{
public:
    cerchio(int c1, int c2, int r) : cx(c1), cy(c2), raggio(r){}
    void draw();
private:
    int cx, cy, raggio;
};

void cerchio::draw(){
    cout << "Questo è un cerchi di centro(" << cx
         << "," << cy << ") e raggio: " << raggio << endl;
}

#endif
