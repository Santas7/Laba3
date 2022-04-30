#include "cube.h"
#include <iostream>
using namespace std;

double Cube::area() const {
        return 6 * pow(_side, 2);
}
double Cube::volume() const {
        return pow(_side, 3);
}
void Cube::print() const {
        cout << "Name Figure: Cube" << endl << "Side: " << _side << endl;
}
Cube::Cube(double side) :_side(side)
{
}
