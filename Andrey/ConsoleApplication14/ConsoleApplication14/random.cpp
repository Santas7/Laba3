#include "random.h"
#include <stdlib.h>
#include <time.h>

int randomValueInt(int min, int max) {
    return (min + rand() % (max - min + 1));
}
double randomValueDouble(double min, double max) {
    return ((double)(rand()) / RAND_MAX * (max - min) + min);
}