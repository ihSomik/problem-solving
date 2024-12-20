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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count(0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                i += k - 1;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}