#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include <iostream>
#include <vector>
#include "command.h"

using namespace std;

class productlist {
public:
    void addProduct(command* a);
    void executeOnProducts();
private:
    vector<command*> products;
};


void productlist::addProduct(command* a){
    products.push_back(a);
}

void productlist::executeOnProducts(){
    for(int i=0; i < products.size(); i++){
        products[i]->execute();
    }
}

#endif
