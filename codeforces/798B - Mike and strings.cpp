#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    /*
    2
    molzv
    lzvmo

    molzvmolzv
    lzvmolzvmo
    compared to the first string (molzv) tempMoves=0+3=3
    compared to the second string (lzvmo) tempMoves=2+0=2
    */
    int minMoves = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int tempMoves = 0;
        for (int j = 0; j < n; j++)
        {
            string tempString = s[j] + s[j];
            int moves = tempString.find(s[i]); // moves is the index at which the string s[i] starts in tempString
            if (moves < 0)
            {
                cout << -1 << endl;
                return 0;
            }
            tempMoves += moves;
        }
        minMoves = min(minMoves, tempMoves);
    }
    cout << minMoves << endl;

    return 0;
}