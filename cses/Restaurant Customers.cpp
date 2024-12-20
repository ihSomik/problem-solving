// Restaurant Customers
// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> times;
    while (n--)
    {
        int start, end;
        cin >> start >> end;
        times.push_back({start, 1}); // for arrival time
        times.push_back({end, -1});  // for leaving time
    }

    sort(times.begin(), times.end());

    int curr_cus(0);
    int max_cus(0);
    for (pair<int, int> t : times)
    {
        curr_cus += t.second;
        max_cus = max(max_cus, curr_cus);
    }

    cout << max_cus << endl;
    return 0;
}