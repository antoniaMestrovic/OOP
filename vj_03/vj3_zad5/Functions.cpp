#include <string>
#include "Header.h"
#include <iostream>
#include <algorithm>
using namespace std;

int countFreq(string& str, string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
        offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}