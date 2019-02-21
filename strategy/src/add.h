#ifndef ADD_H
#define ADD_H

#include <iostream>
#include "strategy.h"

using namespace std;

/* concrete strategy */

class add : public strategy{
public:
    add(int c, int d) : a(c), b(d){}
    void mathOperation();
private:
    int a,b;
};

void add::mathOperation(){
    cout << a + b << endl;
}

#endif
