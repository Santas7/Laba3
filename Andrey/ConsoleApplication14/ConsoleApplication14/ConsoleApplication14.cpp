/*
Панюшкин Андрей лаба 3 вариант 17 (2)
группа 6113
*/
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

#include "figure.h"
#include "coll.h"
#include "key.h"
#include "cone.h"
#include "cube.h"
#include "sphere.h"
#include <time.h>
#include <cmath>
#include <conio.h>
#include <windows.h>

int main()
{
    system("color 2");
    srand(time(NULL));
    //setlocale(LC_ALL, "Rus");
    double a = 0, b = 0, c = 0;
    cout << "[1] Add Cube" << endl << "[2] Add Sphere" << endl
        << "[3] Add Cone" << endl << "[4] Output all list figures"
        << endl << "[5] Inserting a randomly generated object at the end of a collection"
        << endl << "[6] Deleting one object by index" << endl << "[7] Deleting all objects"
        << endl << "[8] Numbers All" << endl << "[BackSpace] Exit" << endl << "-->";
    collection* coll = new collection();
    while (true) {
        
        int commandKey = Menu();
        if (commandKey == 8) {
            system("cls");
            cout << endl << "Exit..." << endl;
            break;
        }
        switch (commandKey) {
        case '1': 
            system("cls");
            cout << "Input side--> "; 
            cin >> a; 
            coll->add(new Cube(a));
            system("cls");
            cout << "Added! [0] Back-->";
            break;
        case '2': 
            system("cls");
            cout << "Input radius--> "; 
            cin >> a; 
            coll->add(new Sphere(a));
            system("cls");
            cout << "Added! [0] Back-->";
            break;
        case '3':
            system("cls");
            cout << "Input radius--> "; 
            cin >> a; 
            cout << "Input length--> "; 
            cin >> b; 
            cout << "Input height--> "; 
            cin >> c; 
            coll->add(new Cone(a, b, c));
            system("cls");
            cout << "Added! [0] Back-->";
            break;
        case '4':
            system("cls");
            coll->print();
            break;
        case '5':
            system("cls");
            coll->add(coll->funcRand());
            cout << "Object is Generated! [0] Back-->";
            break;
        case '6':
            system("cls");
            cout << "Input index value--> "; 
            cin >> a;
            coll->del(a);
            system("cls");
            cout << "Object is Deleted! [0] Back-->";
            break;      
        case '7':
            system("cls");
            coll->delAll();
            cout << "All Objects is Deleted! [0] Back-->";
            break;
        case '8':
            system("cls");
            cout << "Number all--> " << coll->number() << endl;
            cout << "[0] Back-- > ";
            break;
        case 0:
            system("cls");
            cout << "[1] Add Cube" << endl << "[2] Add Sphere" << endl 
                << "[3] Add Cone" << endl << "[4] Output all list figures" 
                << endl << "[5] Inserting a randomly generated object at the end of a collection" 
                << endl << "[6] Deleting one object by index" << endl << "[7] Deleting all objects" 
                << endl << "[8] Numbers All"<<endl<< "[BackSpace] Exit" << endl << "-->";
            break;
        default:
            system("cls");
            cout << "Error!" << endl;
            break;
        }
    }
    delete coll;
    return 0;
}