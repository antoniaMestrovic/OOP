#include "timer.h"
#include <time.h>

void timer::getTime(int&h, int&m, double&s)
{
    h = this->h;
    m = this->m;
    s = this->s;
}
timer::timer(int h, int m, double s)
{
    this->h = h;
    this->m = m;
    this->s = s;
}


void timer::setTime(int h, int m, double s)
{
    this->h = (h >= 0 && h < 24) ? h : 0;
    this->m = (m >= 0 && m < 60) ? m : 0;
    this->s = (s >= 0 && s < 60) ? s : 0;
}
//timer::~timer() {};

timer& timer::operator+=(timer &t)
{
    h += t.h;
    m += t.m;
    s += t.s;
    return *this;
}
timer& timer::operator-=(timer &t)
{

    h -= t.h;
    m -= t.m;
    s -= t.s;
    return *this;
}
timer& timer::operator/=(unsigned int n)
{
    h = h / n;
    m = m / n;
    s = s / n;
    return *this;

}
/*
     This is the friend function. This will allow the function to
     have access to the private instance variables of the classes.

     Precondition: The object is not null and contains values.

     Postcondition: It prints out the values in the class.
 */
std::ostream& operator<<(std::ostream& os, const timer& t)
{
    os << t.h << " : " << t.m << " : " << t.s;
    return os;
}

bool operator<(const timer& t1, const timer& t2)
{
    double timeA = t1.h * 3600 + t1.m * 60 + t1.s;
    double timeB = t2.h * 3600 + t2.m * 60 + t2.s;
    return timeA < timeB;
}
double operator-(timer& t1, timer& t2) {
    int h1, m1, h2, m2;
    double s1, s2;
    t1.getTime(h1, m1, s1);
    t2.getTime(h2, m2, s2);
    return abs(h2 - h1) * 3600 + abs(m2 - m1) * 60 + abs(s2 - s1);
}

Penalty::Penalty(int negP)
{
    penalty = negP;
}

void Penalty::operator()(timer& t)
{
    t.addPenalty(penalty);
}

