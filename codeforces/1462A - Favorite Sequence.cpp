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
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0, j = n - 1; i < n / 2; i++, j--)
            cout << b[i] << " " << b[j] << " ";

        if (n & 1)
            cout << b[n / 2] << endl;
    }
    return 0;
}