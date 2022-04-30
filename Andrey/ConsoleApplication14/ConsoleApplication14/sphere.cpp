#include "sphere.h"
#include <iostream>
using namespace std;

double Sphere::area() const {
        return 4 * M_PI * pow(_radius, 2);
}
double Sphere::volume() const {
        return (4 / 3) * M_PI * pow(_radius, 3);
}
void Sphere::print() const {
        cout << "Name Figure: Sphere" << endl << "Radius: " << _radius << endl;
}
Sphere::Sphere(double radius) :_radius(radius)
{
}
