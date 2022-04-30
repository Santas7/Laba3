#pragma once
#include "figure.h"

class collection {
private:
    int _N = 0;
    Figure** _A = nullptr;
public:
    int number();
    void add(Figure* obj);
    void print() const;
    void del(int index);
    void delAll();
    Figure* funcRand();
    ~collection();
};