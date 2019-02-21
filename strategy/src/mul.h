#ifndef MUL_H
#define MUL_H

#include <iostream>
#include "strategy.h"

using namespace std;

/* concrete strategy*/

class mul : public strategy{
public:
    mul(int c, int d) : a(c), b(d){}
    void mathOperation();
private:
    int a,b;
};

void mul::mathOperation(){
    cout << a * b << endl;
}

#endif
