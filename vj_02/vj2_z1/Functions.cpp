#include <iostream>
#define MAX 100
#include "Header.h"
using namespace std;
/*1. Napisati funkciju koja racuna najveci i najmanji broj u nizu od n prirodnih
brojeva.Funkcija vraca trazene brojeve pomocu referenci.*/

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
};