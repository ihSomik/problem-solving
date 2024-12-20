#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    int count(0);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            if (s[i] != s[i + 1])
                count++;
    }
    cout << count << endl;

    return 0;
}