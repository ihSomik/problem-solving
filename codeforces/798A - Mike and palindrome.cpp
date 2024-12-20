#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();
    int count(0);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            count++;
        if (count > 1)
            break;
    }
    if (count == 1 || (count == 0 && (len & 1)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}