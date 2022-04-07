/*
Лабораторная работа номер 3 вариант 17 (2)
Панюшкин Андрей
6113
*/

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

class Option{
protected:
    static double _area, _volume;
    const double pi = 3.1415926535;
public:
    virtual void area() = 0;
    virtual void volume() = 0;
    virtual void print() const = 0;
};

class Cube : public Option{
private:
    double _side;
public:
    void setSide(double value){_side = value;}
    double getSide(){return _side;}
    void area() override {
        _area = 6*pow(_side, 2);
    }
    void volume() override {
        _volume = pow(_side, 3);
    }
    void print() const override  {
        cout << "Название фигуры: Куб" << endl << "Площадь поверхности: " << _area << endl << "Объем: " << _volume << endl;
    }
    explicit Cube(double value) : _side(value)
    {
    }
};
class Sphere : public Option{
private:
    double _radius;
public:
    void setSide(double value){_radius = value;}
    double getSide(){return _radius;}
    void area() override {
        _area = 4*pi*pow(_radius, 2);
    }
    void volume() override {
        _volume = (4/3)*pi*pow(_radius, 3);
    }
    void print() const override  {
        cout << "Название фигуры: Шар" << endl << "Площадь поверхности: " << _area << endl << "Объем: " << _volume << endl;
    }
    explicit Sphere(double value) : _radius(value)
    {
    }
};
class Cone : public Option{
private:
    double _radius, _length, _height;
public:
    void setSide(double value){_radius = value;}
    double getSide(){return _radius;}
    void setLength(double value){_length = value;}
    double getLength(){return _length;}
    void setHeight(double value){_height = value;}
    double getHeight(){return _height;}
    void area() override {
        _area = pi*_radius*(_radius + _length);
    }
    void volume() override {
        _volume = (1/3)*pi*pow(_radius, 2)*_height;
    }
    void print() const override  {
        cout << "Название фигуры: Конус" << endl << "Площадь поверхности: " << _area << endl << "Объем: " << _volume << endl;
    }
    explicit Cone(double value) : _radius(value), _length(value), _height(value)
    {
    }
};

class collection{
private:
    int size = 0;
    Option** _A;
public:

    void add(Option* N) {
        A = new option[size];
        A[size + 1] = N;
    }

};


int main()
{
    SetConsoleOutputCP(CP_UTF8); //Задает выходную кодовую страницу,
    double a;
    Option *object;

    // меню программы
    cout << "[1] Добавить Куб" << endl << "[2] Добавить Шар" << endl << "[3] Добавить Конус" << endl << "-->";
    while(true){
        int commandKey; cin >> commandKey;
        switch(commandKey){
            case 1:
                system("cls");
                cout << "Куб";
                break;
            case 2:
                system("cls");
                cout << "Шар";
                break;
            case 3:
                system("cls");
                cout << "Конус";
                break;
            default:
                system("cls");
                cout << "Ошибка" << endl;
                break;
        }
    }
    return 0;
}
