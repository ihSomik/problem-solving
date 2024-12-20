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

        int len(0), maxLen(0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (!a[i])
            {
                len++;
                if (len > maxLen)
                    maxLen = len;
            }
            else
                len = 0;
        }

        cout << maxLen << endl;
    }

    return 0;
}
