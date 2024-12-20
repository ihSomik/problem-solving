#include <iostream>
using namespace std;

int checkFound(char ch)
{
    string s = "codeforces";
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ch)
            return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        if (checkFound(ch))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}