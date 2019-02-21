/*
    Implementation of Iterator for list of objA
*/

#include <iostream>
#include <vector>
#include "myiterator.h"
#include "objA.h"


class iteratorForObjA : public myiterator<objA> {
public:
        iteratorForObjA(const vector<objA> l) : ll(l), cursor(0){}
        bool hasNext();
        objA  next();
    private:
        vector<objA> ll;
        int cursor;
};


bool iteratorForObjA::hasNext(){

    if(ll.size() <= cursor) {
        return false;
    }
    return true;
}

objA iteratorForObjA::next(){
    return ll[cursor++];
}
