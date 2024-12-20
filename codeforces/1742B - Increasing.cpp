#include <iostream>
using namespace std;

int checkDuplicates(int n, int a[])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (checkDuplicates(n, a))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}