#include "functions.h"

int main()
{
    vector<int> numbers;

    try
    {
        readFile(numbers);
        countGreater(numbers);
        findMinMax(numbers);
        cout << "Number of numbers before deleting: " << numbers.size();
        deleteLower(numbers);
        cout << "\nNumber of numbers after deleting: " << numbers.size() << endl;
        sortDescending(numbers);
        cout << endl << "Numbers sorted in descending order: ";
        ostream_iterator<int> os(cout << endl, ", ");
        copy(numbers.begin(), numbers.end(), os);
    }
    catch (FileNotFound error)
    {
        error.showError();
    }

    return 0;
}