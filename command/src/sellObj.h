#ifndef SELLOBJ_H
#define SELLOBJ_H

#include <iostream>
#include "command.h"
#include "obj.h"

using namespace std;

class sellObj : public command{
public:
    sellObj(obj *a) : ogg(a){}
    void execute();
private:
    obj *ogg;
};

void sellObj::execute(){
    ogg->sell();
}
#endif
