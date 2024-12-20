#include <iostream>
using namespace std;

int countNonPositiveSequences(long long a[], int n)
{
    int count(0);
    int flag(1);
    long long sum(0);

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            sum += abs(a[i]);
            if (flag && sum != 0)
            {
                count++;
                flag = 0;
            }
        }
        else
        {
            flag = 1;
            sum = 0;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        long long sum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int count = countNonPositiveSequences(a, n);

        cout << sum << " " << count << endl;
    }
    return 0;
}