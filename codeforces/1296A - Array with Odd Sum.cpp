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
        int a[n];

        int sum(0), evenNum(0), oddNum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] & 1)
                oddNum++;
            else
                evenNum++;
        }

        if (sum & 1)
            cout << "YES" << endl;
        else
        {
            if (oddNum > 0 && evenNum > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}