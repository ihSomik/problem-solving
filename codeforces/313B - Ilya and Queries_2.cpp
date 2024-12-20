#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int dp[100000] = {0}, count(0);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        dp[i] = count;
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
    return 0;
}