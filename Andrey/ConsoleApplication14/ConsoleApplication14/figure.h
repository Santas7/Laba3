#pragma once
#define _USE_MATH_DEFINES

class Figure {
public:
    virtual double area() const = 0 {};
    virtual double volume() const = 0 {};
    virtual void print() const = 0 {};
};