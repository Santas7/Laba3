#include "cone.h"
#include <iostream>
using namespace std;

double Cone::area() const 
{
        return M_PI * _radius * (_radius + _length);
}
double Cone::volume() const
{
        return (1 / 3) * M_PI * pow(_radius, 2) * _height;
}
void Cone::print() const {
    cout << "Name Figure: Cone" << endl 
        << "Radius: " << _radius << endl 
        << "Length: " << _length << endl 
        << "Height: " << _height << endl;
}
Cone::Cone(double radius, double length, double height) 
    :_radius(radius), _length(length), _height(height)
{
}
