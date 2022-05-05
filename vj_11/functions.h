#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

/*********************** IZNIMKE ******************/

class Exception
{
public:
    virtual void showError() = 0;
};

class FileNotFound : public Exception
{
public:
    void showError()
    {
        cout << "Could not find that file" << endl << endl;
    }
};

/*********************** FUNKCIJE ***********/

void readFile(vector<int>&);

auto findGreater(int);
void countGreater(vector<int>);
void findMinMax(vector<int>);

auto findLower(int);
void deleteLower(vector<int>&);
void sortDescending(vector<int>&);
