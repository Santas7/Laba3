#include <iostream>
#include <conio.h>
#include "key.h"

int Menu() {
    int key = _getch();
    if (key == 49 || key == 50 || key == 51 || key == 52 || key == 53 || key == 54 || key == 55 || key == 8 || key == 56)
        return key;
    return 0;
}