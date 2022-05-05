#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

class timer
{
    //Klasa treba imati operatore: +=, -=, +, -, /=, /, <<, operator double
private:
    int h, m;
    double s;
public:
        
        void getTime(int& h, int& m, double& s);
        void setTime(int, int, double);
        //timer();
        timer(int h = 0, int m = 0, double s = 0);
        timer& operator+=(timer& t);
        timer& operator-=(timer& t);

        timer& operator/=(unsigned int);
        friend ostream& operator<<(std::ostream& os, const timer& t);
        friend bool operator<(const timer& t1, const timer& t2);
        void addPenalty(double a) {
            s += a; //add s to time
        };

};
double operator-(timer& t1, timer& t2);

class Penalty
{
private:
    int penalty;
public:
    Penalty(int negP);
    void operator()(timer &t);
};

