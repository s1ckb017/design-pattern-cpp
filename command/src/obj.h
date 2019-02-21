#ifndef  OBJ_H
#define  OBJ_H

#include <iostream>

using namespace std;

class obj{
public:
    obj(string a): nomeProdotto(a){}
    void sell();
    void buy();
private:
    string nomeProdotto;
};

void obj::sell(){
    cout << nomeProdotto << " venduto" << endl;
}

void obj::buy(){
    cout << nomeProdotto << " comprato" << endl;
}

#endif
