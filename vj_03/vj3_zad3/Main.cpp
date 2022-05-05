#include "Header.h"
#include <iostream>
#include <algorithm>
#include <numeric>
int main()
{
    int n;
    vector <int> v1;
    cout << "Input the size of vector: " << endl;
    cin >> n;
    cout << "Input the elements in vector: " << endl;
    inputVector(v1, n);
    cout << "Input elements by order: " << endl;
    printVector(v1);

    sort(v1.begin(), v1.end());
    cout << "Elements of vector sorted in ascending order: " << endl;
    printVector(v1);

    int sum = accumulate(v1.begin(), v1.end(), 0);
    v1.insert(v1.end(), sum);
    v1.insert(v1.begin(), 0);
    cout << "After inserting zero before smallest element and sum after largest element: " << endl;
    printVector(v1);
    cout << endl;

    return 0;
}