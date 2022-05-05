#include "Header.h"
#include <iostream>
int main() {
    double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
    int n = sizeof(vals) / sizeof(vals[0]);
    int i;
    cout << "Value before change" << endl;
    for (i = 0; i < n; i++) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1, vals, n)++; // change 2nd element
    setValues(3, vals, n)++;  // change 4th element

    cout << "Value after change" << endl;
    for (i = 0; i < n; i++) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}