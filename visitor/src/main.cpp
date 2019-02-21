#include <iostream>
#include <list>
#include <iterator>
#include "listElements.h"
#include "concreteVisitor.h"

using namespace std;

int main(){
    listElements leclass;

    concreteVisitor* v = new concreteVisitor();
    list<element*> l = leclass.getVe();

    for(std::list<element*>::iterator it = l.begin(); it != l.end(); ++it ){
        (*it)->accept(v);
    }
    return 0;
}
