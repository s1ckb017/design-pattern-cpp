#ifndef DECORATOBORDER_H
#define DECORATOBORDER_H

#include <iostream>
#include "polygon.h"

/* interface decorator*/

class decoratorBorder : public polygon {
public:
    void draw();
    void setPolygon(polygon *p);
private:
    polygon * p;
};

void decoratorBorder::setPolygon(polygon *pp){
    p = pp;
}

void decoratorBorder::draw(){
    p->draw();
}


#endif
