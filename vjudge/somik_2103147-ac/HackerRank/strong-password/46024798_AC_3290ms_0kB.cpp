
#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string pass)
{
    int numCount(0), lowCount(0), upCount(0), specCount(0);
    for (int i = 0; i < n; i++)
    {
        if (pass[i] >= '0' && pass[i] <= '9')
            numCount = 1;
        else if (pass[i] >= 'a' && pass[i] <= 'z')
            lowCount = 1;
        else if (pass[i] >= 'A' && pass[i] <= 'Z')
            upCount = 1;
        else
            specCount = 1;
    }
    int requirement = 4 - (numCount + lowCount + upCount + specCount);
    if ((n + requirement) >= 6)
        return requirement;
    else
        return 6 - n;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << minimumNumber(n, s) << endl;

    return 0;
}
