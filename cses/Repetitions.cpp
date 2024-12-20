// Repetitions
// https://cses.fi/problemset/task/1069/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int len = 1, maxLen = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        (s[i] == s[i + 1]) ? len++ : len = 1;
        maxLen = max(maxLen, len);
    }
    cout << maxLen << endl;

    return 0;
}