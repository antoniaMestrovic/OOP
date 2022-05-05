#include <iostream>
#define MAX 100
#include "Header.h"
using namespace std;
int main()
{
    int arr[MAX], n, max, min;
    int i;

    std::cout << "Please enter the size of array: ";
    std::cin >> n;
    std::cout << "Now enter " << n << " elements in array: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    MinMax(arr, n, min, max);
    cout << "Maximum Value = " << max << "\n";
    cout << "Minimum Value = " << min;
    return 0;
}