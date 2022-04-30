#pragma once
#include "figure.h"

class Cube : public Figure {
protected:
    double _side;
public:
    double area() const override;
    double volume() const override;
    void print() const override;
    Cube(double side = 0);
};
