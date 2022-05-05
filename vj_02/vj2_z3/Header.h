#pragma once
#include <iostream>
using namespace std;

typedef struct
{
    int x, y;
}Point;

typedef struct
{
    int r;
    Point S;
}Circle;

typedef struct
{
    Point A, B;
}Rectangle;
int AreOverlapping(Rectangle* arr, const Circle& c, int n);