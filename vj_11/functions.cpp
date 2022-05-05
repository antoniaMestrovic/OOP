#include "functions.h"

void readFile(vector<int>& numbers)
{
    ifstream inFile("numbers.txt");


    if (!inFile.is_open())
    {
        inFile.close();
        throw FileNotFound();
    }

    istream_iterator<int> in_stream(inFile), eos; //a single-pass input iterator that reads successive objects of type T from the object
    copy(in_stream, eos, back_inserter(numbers)); // insert new elements automatically at the end
}
auto findGreater(int threshold) {
    // This captures a copy of threshold
    return [=](int value) {
        return value > threshold;
    };
};
void countGreater(vector<int> numbers)
{
    cout << count_if(numbers.begin(), numbers.end(), findGreater(500))<< " numbers are greater than 500." << endl;
};

void findMinMax(vector<int> numbers)
{
    auto minmax = minmax_element(numbers.begin(), numbers.end());
    cout << "min: " << *minmax.first << "\tmax:" << *minmax.second << "\n";
};
auto findLower(int threshold) {
    // This captures a copy of threshold
    return [=](int value) {
        return value < threshold;
    };
};
void deleteLower(vector<int>& numbers)
{
    numbers.erase(remove_if(numbers.begin(), numbers.end(), findLower(300)), numbers.end());
};
void sortDescending(vector<int>& numbers)
{
    sort(numbers.begin(), numbers.end(), greater<int>());
};