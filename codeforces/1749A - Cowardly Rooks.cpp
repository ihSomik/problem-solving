#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
        }
        // number of ways to keep rooks at non-attacking position = (n^2 * (n-1)^2 * ... * (n-k-1)^2) / m!    [while (n-k-1) > 0]
        if (m >= n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}