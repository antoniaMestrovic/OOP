#include <iostream>
#define MAX 100

int greatestNum(int array[], int index, int len)
{
    int max;
    if (index >= len - 2)
    {
        if (array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    max = greatestNum(array, index + 1, len);

    if (array[index] > max)
        return array[index];
    else
        return max;
}

int smallestNum(int array[], int index, int len)
{
    int min;

    if (index >= len - 2)
    {
        if (array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = smallestNum(array, index + 1, len);

    if (array[index] < min)
        return array[index];
    else
        return min;
}



int main()
{
    int array[MAX], Num, max, min;
    int i;

    std::cout << "Please enter the size of array: ";
    std::cin >> Num;
    std::cout << "Now enter " << Num << " elements in array: ";
    for (i = 0; i < Num; i++)
    {
        std::cin >> array[i];
    }

    max = greatestNum(array, 0, Num);
    min = smallestNum(array, 0, Num);

    std::cout << "The Smallest element in array: " << min << std::endl;
    std::cout << "The Greatest element in array: " << max << std::endl;

    return 0;
}