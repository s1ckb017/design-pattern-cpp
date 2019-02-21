#include <iostream>
#include "contesto.h"
#include "add.h"
#include "mul.h"

int main(){
    contesto a(new add(1,2));
    contesto b(new mul(3,3));

    a.executeStrategy();
    b.executeStrategy();
    return 0;
}
