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
        int a[100];

        int x(1);
        int i(0);
        while (n)
        {
            int rem = n % 10;
            if (rem)
            {
                a[i] = rem * x;
                i++;
            }
            n /= 10;
            x *= 10;
        }

        cout << i << endl;
        for (int j = 0; j < i; j++)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
