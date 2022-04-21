/*
Лабораторная работа номер 3 вариант 17 (2)
Панюшкин Андрей
6113
*/
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

class Figure {
public:
    virtual double area() const = 0 {};
    virtual double volume() const = 0 {};
    virtual string info() const = 0 {};
    virtual void print() const = 0 {};
};

class Cube : public Figure {
protected:
    double _side;
public:
    double area() const override {
        return 6 * pow(_side, 2);
    }
    double volume() const override {
        return pow(_side, 3);
    }
    string info() const override {
        return "Cube";
    }
    void print() const override {
        cout << "Name Figure: " << info() << endl << "Side: " << _side << endl;
    }
    explicit Cube(double side = 0) :_side(side)
    {
    }
};
class Sphere : public Figure {
protected:
    double _radius;
public:
    double area() const override {
        return 4 * M_PI * pow(_radius, 2);
    }
    double volume() const override {
        return (4 / 3) * M_PI * pow(_radius, 3);
    }
    string info() const override {
        return "Sphere";
    }
    void print() const override {
        cout << "Name Figure: " << info() << endl << "Radius: " << _radius << endl;
    }
    explicit Sphere(double radius = 0) :_radius(radius)
    {
    }
};
class Cone : public Figure {
protected:
    double _radius, _length, _height;
public:
    double area() const override {
        return M_PI * _radius * (_radius + _length);
    }
    double volume() const override {
        return (1 / 3) * M_PI * pow(_radius, 2) * _height;
    }
    string info() const override {
        return "Cone";
    }
    void print() const override {
        cout << "Name Figure: " << info() << endl << "Radius: " << _radius << endl << "Length: " << _length << endl << "Height: " << _height << endl;
    }
    explicit Cone(double radius = 0, double length = 0, double height = 0) :_radius(radius), _length(length), _height(height)
    {
    }
};

class collection {
private:
    int N;
    Figure** _A;
public:
    void ADD(Figure* obj) {
        ++N;
        _A = (Figure**)realloc(_A, N * sizeof(Figure*));
        _A[N - 1] = obj;
    }
};
void Oper(Figure** _A, int N) {
    for (int i = 0; i <= N; ++i) {
        _A[i]->print();
        cout << "Surface area: " << _A[i]->area() << endl << "Volume: " << _A[i]->volume() << endl << endl;
    }
    cout << "Back-->";
}
int Menu() {
    int key = _getch();
    if (key == 49 || key == 50 || key == 51 || key == 52)
        return key;
    return 0;
}
int main()
{
    //setlocale(LC_ALL, "Rus");
    double a = 0, b = 0, c = 0;
    collection* coll = new collection();
    while (true) {
        int commandKey = Menu();
        switch (commandKey) {
        case 49:
            system("cls");
            cout << "Input side--> "; cin >> a; 
            coll->ADD(new Cube(a));
            system("cls");
            cout << "Added! [0] Back -->";
            break;
        case 50:
            system("cls");
            Figure* _A[2];
            cout << "Input radius--> "; cin >> a; 
            coll->ADD(new Sphere(a));
            system("cls");
            cout << "Added! [0] Back -->";
            break;
        case 51:
            system("cls");
            cout << "Input radius--> "; cin >> a; 
            cout << "Input length--> "; cin >> b; 
            cout << "Input height--> "; cin >> c; 
            coll->ADD(new Cone(a, b, c));
            system("cls");
            cout << "Added! [0] Back -->";
            break;
        case 52:
            system("cls");
            //Oper(_A, N);
            break;
        case 0:
            system("cls");
            cout << "[1] Add Cube" << endl << "[2] Add Sphere" << endl << "[3] Add Cone" << endl << "[4] Output all list figures" << endl << "-->";
            break;
        default:
            system("cls");
            cout << "Error!" << endl;
            break;
        }
    }
    return 0;
}
