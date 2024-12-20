#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

char checkResult(char a[3][3])
{
    /*
    00 01 02
    10 11 12
    20 21 22
    */
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == a[i][1] && a[i][0] == a[i][2] && a[i][0] != '.')
            return a[i][0];
    }
    for (int j = 0; j < 3; j++)
    {
        if (a[0][j] == a[1][j] && a[0][j] == a[2][j] && a[0][j] != '.')
            return a[0][j];
    }
    if ((a[0][0] == a[1][1] && a[0][0] == a[2][2]) || (a[0][2] == a[1][1] && a[0][2] == a[2][0]))
        return a[1][1];
    else
        return '.';
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        char ch = checkResult(a);
        if (ch != '.')
            cout << ch << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}