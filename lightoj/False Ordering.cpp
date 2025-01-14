#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

bool comparator(pii& a, pii& b) {
  if (a.first == b.first) return a.second > b.second;
  return a.first < b.first;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n;
    cin >> n;

    vector<int> div(1001, 1);

    for (int i = 2; i <= 1000; i++)
      for (int j = i; j <= 1000; j += i) div[j]++;

    vector<pii> v;
    for (int i = 1; i <= 1000; i++) v.push_back({div[i], i});

    sort(v.begin(), v.end(), comparator);

    cout << "Case " << tc << ": " << v[n - 1].second << endl;
  }
}