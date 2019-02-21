#include <iostream>
#include <list>

#include "objA.h"
#include "containerForObjA.h"

using namespace std;


int main(){
    objA a(1),b(2),c(3),d(4);
    containerForObjA cia;
    vector<objA> *ll = cia.getVector();

    ll->push_back(a);
    ll->push_back(b);
    ll->push_back(c);
    ll->push_back(d);

    for(myiterator<objA>* i = cia.getIterator(); i->hasNext();){
        objA tmp = i->next();
        cout << "value: " << tmp.getValue()  << endl;
    }
    delete cia.getIterator();

    return 0;
}
