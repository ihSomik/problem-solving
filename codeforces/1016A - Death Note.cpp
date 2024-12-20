// Wrong answer on test 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int total_times(0);
    int total_pages(0);
    int times;
    for (int i = 0; i < n; i++)
    {
        total_pages += a[i];
        times = total_pages / m;
        cout << times - total_times << " ";
        total_times += times;
    }
    return 0;
}