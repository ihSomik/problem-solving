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
        int Min = 1e7;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Min = min(a[i], Min);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i] - Min;

        cout << sum << endl;
    }
}