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
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
void EraseSpecElement(vector<int>& arr, int pos)
{
    vector<int>::iterator it = arr.begin();
    advance(it, pos);
    arr.erase(it);
}

