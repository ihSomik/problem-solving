// Two Sets
// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    vector<int> firstSet;
    vector<int> secSet;

    if (!(n & 1))
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (!(i & 1))
            {
                firstSet.push_back(i + 1);
                firstSet.push_back(n - i);
            }
            else
            {
                secSet.push_back(i + 1);
                secSet.push_back(n - i);
            }
        }
    }
    else
    {
        for (int i = 0; i < (n - 1) / 2; i++)
        {
            if (!(i & 1))
            {
                firstSet.push_back(i + 1);
                firstSet.push_back(n - i - 1);
            }
            else
            {
                secSet.push_back(i + 1);
                secSet.push_back(n - i - 1);
            }
        }
        secSet.push_back(n);
    }

    cout << firstSet.size() << endl;
    for (auto it : firstSet)
        cout << it << " ";
    cout << endl
         << secSet.size() << endl;
    for (auto it : secSet)
        cout << it << " ";
    cout << endl;

    return 0;
}