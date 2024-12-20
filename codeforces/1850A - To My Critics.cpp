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
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || a + c >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}