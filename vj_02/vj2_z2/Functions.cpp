#include "Header.h"
#include <iostream>
#include <ctime>

double& setValues(int i, double* vals, int n) {
    if (i <= n) {
        return vals[i]; // vraca referencu na iti element
    }
    return vals[0];
}