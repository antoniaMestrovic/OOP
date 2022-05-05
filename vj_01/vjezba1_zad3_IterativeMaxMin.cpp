#include <iostream>
#define MAX 100
using namespace std;
void MinMax(int arr[], int size, int& min, int& max)
{
    if (size <= 0)
        return;
    min = max = arr[0];

    int count = 0;
    double sum = 0;
    int i;

    for (i = 1; i < size; i++)
    {
        count++;
        sum += arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }

        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int main()
{
    int arr[MAX], size, max, min;
    int i;

    std::cout << "Please enter the size of array: ";
    std::cin >> size;
    std::cout << "Now enter " << size << " elements in array: ";
    for (i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    MinMax(arr, size, min, max);
    cout << "Maximum Value = " << max << "\n";
    cout << "Minimum Value = " << min;
    return 0;
}