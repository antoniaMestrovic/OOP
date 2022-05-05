#include "Header.h"
using namespace std;
int main()
{
    int n;
    vector <int> v1;
    cout << "Input the size of vector: " << endl;
    cin >> n;
    cout << "Input the elements in vector: " << endl;
    inputVector(v1, n);

    cout << "Elements by order of input: " << endl;
    printVector(v1);
    int i;
    cout << "Erase by index: " << endl;
    cin >> i;
    EraseSpecElement(v1, i);
    cout << "After erasing an element: " << endl;
    printVector(v1);
    cout << endl;
    return 0;
}