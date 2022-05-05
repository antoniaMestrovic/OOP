#pragma once
#include <iostream>

using namespace std;

template <typename T>
void sort(T* elements, int counter)  //bubble sort for int
{
    for (int i = 1; i < counter; ++i)
    {
        for (int j = counter - 1; j >= i; --j)
        {
            if (elements[j - 1] > elements[j])
            {
                swap(elements[j - 1], elements[j]);
            }
        }
    }
}

template <>
void sort(char* elements, int counter)  //bubble sort for char
{
    for (int i = 1; i < counter; ++i)
    {
        for (int j = counter - 1; j >= i; --j)
        {
            if (toupper(elements[j - 1]) > toupper(elements[j]))
            {
                swap(elements[j - 1], elements[j]);
            }
        }
    }
}

template<typename T>
void print(T object, int counter, string str)
{
    cout << str;
    for (int i = 0; i < counter; i++)
    {
        cout << object[i] << " ";
    }
    cout << endl;
}