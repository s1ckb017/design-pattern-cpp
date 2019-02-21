#ifndef VISITOR_H
#define  VISITOR_H



/*
    interface visitor
*/

class elementoA;
class elementoB;

class visitor{
public:
    virtual void visit(elementoA* ea) = 0;
    virtual void visit(elementoB* ea) = 0;
};

#endif
