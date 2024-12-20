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
    for (int j = 1; j <= t; j++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        for (int i = 0; i < n; i++)
        {
            char c = 'A' + i;
            s += c;
        }
        
        sort(s.begin(), s.end());
        cout << "Case " << j << ":" << endl;

        cout << s << endl;
        k--;
        while (next_permutation(s.begin(), s.end()) && k--)
        {
            cout << s << endl;
        }
    }
}