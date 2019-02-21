#include <iostream>
#include "buyObj.h"
#include "sellObj.h"
#include "productList.h"
#include "obj.h"

int main(){
    obj a("macchina"), b("scooter");
    buyObj bo(&a);
    sellObj so(&b);

    productlist pl;
    pl.addProduct(&bo);
    pl.addProduct(&so);

    pl.executeOnProducts();

    return 0;
}
