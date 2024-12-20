#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "codeforces";
        string s2;
        cin >> s2;

        int count(0);
        for (int i = 0; i < 10; i++)
            if (s[i] != s2[i])
                count++;

        cout << count << endl;
    }

    return 0;
}
