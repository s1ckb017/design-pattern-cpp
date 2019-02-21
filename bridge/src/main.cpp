#include <iostream>
#include "concreteAbstraction.h"
#include "concreteImplementor.h"
#include "concreteImplementor2.h"

using namespace std;

int main(){

    concreteabstraction a(new concreteImplementor());
    concreteabstraction b(new concreteImplementor2());

    a.printfromhere();
    b.printfromhere();
    return 0;
}
