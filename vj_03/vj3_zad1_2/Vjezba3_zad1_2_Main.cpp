#include "Header.h"
#include <iostream>
#include <vector>

int main()
{
    int n, start, stop;
    vector <int> v1, v2, v3;
    cout << "Input the size of vector: " << endl;
    cin >> n;
    cout << "Input the elements in vector: " << endl;
    inputVector(v1, n);
    cout << "Input start and end of range vector: " << endl;
    cin >> start;
    cin >> stop;
    cout << "Input the elements in between range: " << endl;
    cout << "To stop the input enter a number not in the rage limit!: " << endl;
    inputVectorRange(v2, start, stop);
    cout << "This is the first array of vectors: " << endl;
    printVector(v1);
    cout << endl;
    cout << "This is the second array of vectors: " << endl;
    printVector(v2);
    v3 = NewVector(v1, v2);
    cout << "This is the third array of vectors: " << endl;
    printVector(v3);
    return 0;

}