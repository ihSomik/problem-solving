// Circle in Square
// https://lightoj.com/problem/circle-in-square
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double r, areaC, areaS;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> r;
        double areaC = 2 * acos(0.0) * r * r;
        double areaS = (2 * r) * (2 * r);

        cout << "Case " << i << ": " << fixed << setprecision(2) << areaS - areaC << endl;
    }
    return 0;
}
