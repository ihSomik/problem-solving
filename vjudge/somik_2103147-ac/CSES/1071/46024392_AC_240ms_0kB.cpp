// Number Spiral
// https://cses.fi/problemset/task/1071/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long y, x;
        cin >> y >> x;

        if (y > x)
        {
            if (y & 1)
                cout << (y - 1) * (y - 1) + 1 + (x - 1) << endl; // (y-1)^2+1+(x-1)
            else
                cout << (y * y) - (x - 1) << endl; // y^2-(x-1)
        }
        else
        {
            if (x & 1)
                cout << x * x - (y - 1) << endl; // x^2-(y-1)
            else
                cout << (x - 1) * (x - 1) + 1 + (y - 1) << endl; // (x-1)^2+1+(y-1)
        }
    }
    return 0;
}