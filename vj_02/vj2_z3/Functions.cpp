#include <iostream>
#include "Header.h"
using namespace std;
int AreOverlapping(Rectangle* arr, const Circle& c, int n)
{
    Point D;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        D.x = c.S.x - max(arr[i].A.x, min(c.S.x, arr[i].A.x + (arr[i].B.x - arr[i].A.x)));
        D.y = c.S.y - max(arr[i].A.y, min(c.S.y, arr[i].A.y + (arr[i].B.y - arr[i].A.y)));

        if ((D.x * D.x + D.y * D.y) <= c.r * c.r)
        {
            cnt++;
        }
    }
    return cnt;
};