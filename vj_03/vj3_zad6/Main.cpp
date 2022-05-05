#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include "Header.h"
using namespace std;

int main()
{
    vector<string> v = sortReversed();
    cout << "Strings reversed and sorted: " << endl;
    printVector(v);
    return 0;
}