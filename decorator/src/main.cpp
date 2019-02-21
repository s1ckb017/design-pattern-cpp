#include <iostream>
#include "cerchio.h"
#include "quadrato.h"
#include "decoratorRedBorder.h"

using namespace std;

int main(){
    /* componenti */
    quadrato a(1);
    cerchio c(0,0, 3);

    /* decoratori specifici rossi */
    decoratorRedBorder decQ, decC;


    decQ.setPolygon(&a);
    decC.setPolygon(&c);
    decQ.draw();
    decC.draw();

    return 0;
}
