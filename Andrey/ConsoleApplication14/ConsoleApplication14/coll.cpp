#include "random.h"
#include "coll.h"
#include "figure.h"
#include "cube.h"
#include "cone.h"
#include "sphere.h"
#include <time.h>
#include <iostream>


using namespace std;

int collection::number() {
    return _N;
}
void collection::add(Figure* obj) {
    ++_N;
    _A = (Figure**)realloc(_A, _N * sizeof(Figure*));
    _A[_N - 1] = obj;
}
void collection::print() const {
    for (int i = 0; i < _N; ++i)
    {
        _A[i]->print();
        cout << "Surface area: " << _A[i]->area() << endl 
            << "Volume: " << _A[i]->volume() << endl << endl;
    }
    cout << "[0] Back-->";
}
void collection::del(int index) {
    delete _A[index];
    for (int i = index; i < _N; ++i) 
        _A[index] = _A[index + 1]; 
    --_N; // уменьшаем кол-во так как удалили объект
    _A = (Figure**)realloc(_A, _N * sizeof(Figure*));
}
void collection::delAll() {
    for (int i = 0; i < _N; ++i)
        delete _A[i];
    _N = 0;
    _A = (Figure**)realloc(_A, _N * sizeof(Figure*));
}

Figure* collection::funcRand() {
    int value = randomValueInt(0, 2);
    if (value == 0) 
        return new Cube(randomValueDouble(-99999999, 99999999));
    else if (value == 1) 
        return new Sphere(randomValueDouble(-99999999, 99999999));
    else if (value == 2)
        return new Cone(randomValueDouble(-99999999, 99999999), randomValueDouble(-99999999, 99999999), randomValueDouble(-99999999, 99999999));
    else cout << "Error!" << endl;
}
collection::~collection()
{
    delAll();
    cout << "Destructor!" << endl;
}
