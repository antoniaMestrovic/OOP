#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include "Header.h"
using namespace std;
vector <string> sortReversed()
{
    vector <string> v;
    cout << "Input the number of strings: " << endl;
    int n;
    cin >> n;
    string Str;
    cout << "Input the strings: " << endl;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, Str);
        v.push_back(Str);
    }
    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
    sort(v.begin(), v.end());
    return v;
}
void printVector(vector<string> v1)
{

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
};