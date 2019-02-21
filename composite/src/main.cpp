#include <iostream>
#include "composition.h"
#include "leaf.h"

using namespace std;


int main(){

    composition e, d;
    leaf a("bye"), b("helo"), c("hacked");

    e.addElement(&a);
    e.addElement(&b);
    d.addElement(&c);
    e.addElement(&d);

    e.dothis();
    return 0;
}
