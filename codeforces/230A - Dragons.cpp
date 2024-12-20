// Wrong answer on test 7
// showing wronng answer, cause Kirito can fight the dragons in any order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int flag(1);
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (s < x)
            flag = 0;
        else
        {
            s += y;
            flag = 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}