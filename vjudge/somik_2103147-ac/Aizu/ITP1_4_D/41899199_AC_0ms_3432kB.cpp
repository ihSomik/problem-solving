#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long sum = 0, mx = -1000000, mn = 1000000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    cout << mn << " " << mx << " " << sum << endl;
}
