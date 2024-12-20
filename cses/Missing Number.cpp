// Missing Number
// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a[n - 1];

    long long sum(0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << n * (n + 1) / 2 - sum << endl;

    return 0;
}
