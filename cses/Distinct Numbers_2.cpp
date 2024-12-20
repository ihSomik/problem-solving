// Distinct Numbers
// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> x;
    while (n--)
    {
        int t;
        cin >> t;
        x.insert(t);
    }
    cout << x.size() << endl;
}
