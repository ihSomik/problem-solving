#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int odd(0);
        for (int i = 0; i < 2 * n; i++)
        {
            int a;
            cin >> a;
            if (a & 1)
                odd++;
        }

        cout << (odd == n ? "YES" : "NO") << endl;
    }
    return 0;
}