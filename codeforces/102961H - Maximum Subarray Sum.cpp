#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    ll sum(0), maxSum = INT_MIN;
    while (n--)
    {
        int x;
        cin >> x;
        sum += x;
        if (sum > maxSum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << maxSum << endl;

    return 0;
}