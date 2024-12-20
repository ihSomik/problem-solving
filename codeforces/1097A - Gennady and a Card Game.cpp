#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int t = 5;
    while (t--)
    {
        string newS;
        cin >> newS;
        if (newS[0] == s[0] || newS[1] == s[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
