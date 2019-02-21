#ifndef CONTAINER_H
#define CONTAINER_H

/*
    container interface, to be applied to generic objects list
*/
#include <vector>
#include "myiterator.h"

using namespace std;

template <class C> class container{
public:
    virtual myiterator<C>* getIterator() = 0;
    virtual vector<C>* getVector() = 0;
private:
    vector<C> l_objects;
    myiterator<C> * it;
};

#endif
