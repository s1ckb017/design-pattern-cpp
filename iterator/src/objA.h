#ifndef OBJA_H
#define OBJA_H

/*
    singolo componente della lista(vettore)
*/

#include <iostream>

using namespace std;


class objA{

public:
    objA(int j) : value(j){}
    void setValue(int j){ value=j; }
    int getValue(){return value;}
private:
    int value;

};

#endif
