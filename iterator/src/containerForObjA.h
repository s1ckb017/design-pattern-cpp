#include <iostream>
#include <vector>
#include "container.h"
#include "iteratorForObjA.h"
#include "objA.h"

using namespace std;

/*
    implementation of container for list of objA objects
*/

class containerForObjA : public container<objA>{
public:
    myiterator<objA>* getIterator();
    vector<objA>* getVector(){ return &l_objects; }
private:
    vector<objA> l_objects;
    myiterator<objA> * it;
};

myiterator<objA>* containerForObjA::getIterator(){
    it = new iteratorForObjA(l_objects);
    return it;
}
