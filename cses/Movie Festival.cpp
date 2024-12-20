// Movie Festival
// https://www.cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> time(n);

    for (int i = 0; i < n; i++) cin >> time[i].second >> time[i].first;

    sort(time.begin(), time.end());  // sorting by ending time

    for (int i = 0; i < n; i++) swap(time[i].second, time[i].first);

    int endTime(0), count(0);
    for (auto t : time) {
        if (t.first >= endTime) {
            count++;
            endTime = t.second;
        }
    }

    cout << count << endl;
}