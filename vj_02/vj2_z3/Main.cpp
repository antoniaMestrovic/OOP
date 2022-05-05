#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    const int n = 3;
    Rectangle arr[n];
    for (int i = 0; i < n; i++) {                   		//taking values from user
        cout << "Point A" << i + 1 << endl;
        cout << "Enter x " << endl;
        cin >> arr[i].A.x;
        cout << "Enter y" << endl;
        cin >> arr[i].A.y;
        cout << "Point B" << i + 1 << endl;
        cout << "Enter x " << endl;
        cin >> arr[i].B.x;
        cout << "Enter y" << endl;
        cin >> arr[i].B.y;
    }

    for (int i = 0; i < n; i++) {							//printing values
        cout << "Point A" << i + 1 << endl;
        cout << "X : " << arr[i].A.x << endl;
        cout << "Y : " << arr[i].A.y << endl;
        cout << "Point B" << i + 1 << endl;
        cout << "X : " << arr[i].B.x << endl;
        cout << "Y : " << arr[i].B.y << endl;
    }

    Circle c = { 4,{4,4} };

    cout << AreOverlapping(arr, c, 3) << " rectangles overlap with the circle" << endl;
    return 0;
}