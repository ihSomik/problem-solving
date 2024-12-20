#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        if (s[0] != '9')
        {
            for (int i = 0; i < n; i++)
            {
                int dig = '9' - s[i];
                ans += dig + '0';
            }
        }
        else
        {
            int c = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int x = s[i] - '0' + c;
                if (x > 1)
                {
                    int dig = 11 - x;
                    ans += dig + '0';
                    c = 1;
                }
                else
                {
                    int dig = 1 - x;
                    ans += dig + '0';
                    c = 0;
                }
            }
            reverse(ans.begin(), ans.end());
        }

        cout << ans << endl;
    }
    return 0;
}