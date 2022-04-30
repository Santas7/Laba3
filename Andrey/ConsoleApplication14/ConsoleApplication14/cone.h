#pragma once
#include "figure.h"

class Cone : public Figure {
protected:
    double _radius, _length, _height;
public:
    double area() const override;
    double volume() const override;
    void print() const override;
    Cone(double radius = 0, double length = 0, double height = 0);
};