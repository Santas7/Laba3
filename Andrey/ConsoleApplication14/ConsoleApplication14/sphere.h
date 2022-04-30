#pragma once
#include "figure.h"

class Sphere : public Figure {
protected:
    double _radius;
public:
    double area() const override;
    double volume() const override;
    void print() const override;
    Sphere(double radius = 0);
};