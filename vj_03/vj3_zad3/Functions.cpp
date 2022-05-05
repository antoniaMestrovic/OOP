#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include "Header.h"
using namespace std;
void inputVector(vector<int>& arr, int n)
{
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
}
void printVector(vector<int>& arr)
{
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
