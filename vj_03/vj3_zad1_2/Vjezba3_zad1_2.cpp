#include "Header.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void inputVector(vector <int>& arr, int n)
{
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);

    }

}
void inputVectorRange(vector<int>& arr, int start, int stop)
{
    int input;
    cin >> input;
    while ((input >= start) && (input <= stop))
    {
        arr.push_back(input);
        cin >> input;
    }
}

vector<int>NewVector(vector<int>& v1, vector<int>& v2)
{
    vector<int> v3;
    int len = v1.size();
    for (int i = 0; i < len; i++)
    {
        if (!(find(v2.begin(), v2.end(), v1[i]) != v2.end()))
        {
            v3.push_back(v1[i]);
        }
    }
    return v3;
}
void printVector(const vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
