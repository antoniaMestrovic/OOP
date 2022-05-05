#include "header.h"

void testIt(int* intArr, float* floatArr, char* charArr, char* charCaseArr)
{
    const int SIZE = 10;
    const int SIZE_CHAR = 7;
    const string SORT = "Sorted arr: ";
    const string NOTSORT = "Not sorted arr: ";

    print(intArr, SIZE, NOTSORT);
    print(floatArr, SIZE, NOTSORT);
    print(charArr, SIZE_CHAR, NOTSORT);
    print(charCaseArr, SIZE_CHAR, NOTSORT);
    cout << endl;

    sort(intArr, SIZE);
    sort(floatArr, SIZE);
    sort(charArr, SIZE_CHAR);
    sort(charCaseArr, SIZE_CHAR);

    print(intArr, SIZE, SORT);
    print(floatArr, SIZE, SORT);
    print(charArr, SIZE_CHAR, SORT);
    print(charCaseArr, SIZE_CHAR, SORT);
}
int main()
{
    const int SIZE = 10;
    int intArr[SIZE] = { 10, 25, 11, 2, 18, 4, 8, 75, 42, 14 };
    float floatArr[SIZE] = { 2.9, 3.14, 9.81, 72.9, 48.7, 91.8, 150.1, 70.1, 53.2, 11.3 };
    const int SIZE_CHAR = 7;
    char charArr[SIZE_CHAR] = { 'n','s', 'p', 'r', 'o', 'e', 'c' };
    char charCaseArr[SIZE_CHAR] = { 'N','s', 'P', 'r', 'O', 'e', 'C' };
    /*
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    int n4 = sizeof(charCaseArr) / sizeof(charCaseArr[0]);
    */
    testIt(intArr, floatArr, charArr, charCaseArr);

    return 0;
}

