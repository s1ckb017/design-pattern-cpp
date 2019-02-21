#ifndef LEAF_H
#define LEAF_H

#include <iostream>
#include "component.h"

using namespace std;
class leaf : public component{
public:
    leaf(string a) : member(a){}
    void dothis();
private:
    string member;
};

void leaf::dothis(){
    cout << member << endl;
}

#endif
