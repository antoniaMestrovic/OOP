#include "vector.hpp"

void MyVector::vector_new(size_t sz)
{
    size = 0;
    capacity = 1;
    arr = new int[capacity];
};
void MyVector::vector_delete()
{
    delete[] arr;
};
void MyVector::vector_push_back(int n)
{
    if (size == capacity)
    {
        int* temp = new int[capacity * 2];
        for (int i = 0; i < capacity; ++i)
        {
            temp[i] = arr[i];
        }
        capacity *= 2;
        delete[] arr;
        arr = temp;
    }
    arr[size] = n;
    size++;
};
void MyVector::vector_pop_back()
{
    size -= 1;
};
int& MyVector::vector_front()
{
    return arr[0];
};
int& MyVector::vector_back()
{
    return arr[size - 1];
};
size_t MyVector::vector_size()
{
    return size;
};


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}