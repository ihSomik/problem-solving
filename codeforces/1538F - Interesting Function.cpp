#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int count(0);
        while (l || r)
        {
            count += (r - l);
            l /= 10;
            r /= 10;
        }
        cout << count << endl;
    }

    return 0;
}