#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int m, s;
    cin >> m >> s;

    if (s > m * 9)
        cout << "-1 -1" << endl;
    else if (!s)
        m == 1 ? cout << "0 0" : cout << "-1 -1";
    else
    {
        string minNum, maxNum;
        while (m--)
        {
            int t = min(9, s);
            maxNum += '0' + t;
            s -= t;
        }

        minNum = maxNum;
        reverse(minNum.begin(), minNum.end());

        if (minNum[0] == '0')
        {
            minNum[0]++;
            m = 1;
            while (minNum[m] == '0')
                m++;
            minNum[m]--;
        }
        /*
            for this test case,
            3 9
            output: 108 900
        */
        cout << minNum << " " << maxNum << endl;
    }

    return 0;
}