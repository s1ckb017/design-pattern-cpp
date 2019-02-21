#ifndef BUYOBJ_H
#define BUYOBJ_H

#include <iostream>
#include "command.h"
#include "obj.h"

using namespace std;

class buyObj : public command{
public:
    buyObj(obj *a) : ogg(a){}
    void execute();
private:
    obj *ogg;
};

void buyObj::execute(){
    ogg->buy();
}

#endif
