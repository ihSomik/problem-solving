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
        int n, count(0);
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if (b < a)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}