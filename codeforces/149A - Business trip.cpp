#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    int a[12];
    int sum(0);
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum < k)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(a, a + 12);
    reverse(a, a + 12);

    sum = 0;
    int month(0);
    while (sum < k)
    {
        sum += a[month];
        month++;
    }
    cout << month << endl;

    return 0;
}