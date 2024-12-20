#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char maxChar = 'a';
        for (int i = 0; i < n; i++)
            if (s[i] > maxChar)
                maxChar = s[i];

        cout << maxChar - 'a' + 1 << endl;
    }
    return 0;
}
