#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Stack
{
private:
	T* stackPointer;
	const int maxSize = 1000;
	unsigned int size;
	T top;


public:
	Stack(unsigned int = maxSize) {
		stackPointer = new T[maxSize];
		size = maxSize;
		top = -1;
	}
	bool isEmpty() {
		return !(top == maxSize);
	};
	bool isFull() {
		return (top == size - 1);
	};
	void Push(T elementToPush) {
		if (!isFull())
		{
			*stackPointer = elementToPush;
			top = *stackPointer;
			++stackPointer;
			--size;
		}
		else
			std::cout << "Stack is full, sorry!" << std::endl;
	};
	T Pop() {
		if (!isEmpty())
		{
			auto result = top;
			--stackPointer;
			++size;
			top = *(stackPointer - 1);
			return result;
		}
		std::cout << "Stack is empty, sorry!" << std::endl;
	};
	void GetTop() {
		if (!isEmpty())
		{
			cout << stackPointer[top] << endl;
		}
	};
	void print() {
		while (!isEmpty()) {
			cout << this->Pop() << " ";
		}
	
	};

};