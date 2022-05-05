#include "Header.h"

int main()
{

    const int maxSize = 100;
    Stack<int> myStackInt(maxSize);
    Stack<double> myStackDouble(maxSize);
    Stack<char> myStackChar(maxSize);
    
    myStackInt.Push(1);
    myStackInt.Push(6);
    myStackInt.Push(12);
    myStackInt.Push(18);
    
    myStackDouble.Push(3.33);
    myStackDouble.Push(9.81);
    myStackDouble.Push(3.14);
    
    myStackChar.Push('a');
    myStackChar.Push('b');
    myStackChar.Push('c');

    myStackInt.print();
    myStackChar.print();
    myStackDouble.print();
    

    myStackInt.Pop();
    myStackDouble.Pop();
    myStackDouble.Pop();
    myStackDouble.Pop();

    //myStackInt.print();
    //myStackChar.print();
    //myStackDouble.print();
    
    return 0;
}

