#include "Header.h"
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string str = "This is a isostruct";
    string substr = "is";
    cout << "The number of '" << substr << "' occurence is: " << countFreq(str, substr);
    return 0;
}