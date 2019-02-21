#ifndef DECORATORREDBORDER_H
#define DECORATORREDBORDER_H

#include <iostream>
#include "decoratorBorder.h"

using namespace std;

class decoratorRedBorder : public decoratorBorder{
public:
    void draw();
    void setPolygon(polygon *p);
    void decorateRedBord();
private:
    polygon * p;
};

void decoratorRedBorder::setPolygon(polygon *pp){
    p = pp;
}

void decoratorRedBorder::draw(){
    p->draw();
    decorateRedBord();
}

void decoratorRedBorder::decorateRedBord(){
    cout << "I bordi sono rossi" << endl;
}
#endif
