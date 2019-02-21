#ifndef CONTESTO_H
#define CONTESTO_H

#include <iostream>
#include "strategy.h"

class contesto{
public:
    contesto(strategy *ss) : s(ss){}
    void executeStrategy();
private:
    strategy *s;
};

void contesto::executeStrategy(){
    s->mathOperation();
}

#endif
