// Time limit exceeded on test 10
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int m;
    cin >> m;
    while (m--)
    {
        int count(0);
        int l, r;
        cin >> l >> r;

        for (int i = l - 1; i < r - 1; i++)
            if (s[i] == s[i + 1])
                count++;

        cout << count << endl;
    }
    return 0;
}