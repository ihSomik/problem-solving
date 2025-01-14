#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int maxX = 1e7;
vector<int> divisor(maxX + 1, 1);

void sieve() {
  for (int i = 2; i <= maxX; i++)
    for (int j = i; j <= maxX; j += i) divisor[j]++;  // i is a divisor of j
}

int main() {
  fastread();
  sieve();
  int x;
  cin >> x;
  ll sum(0);
  for (int i = 1; i <= x; i++) sum += (ll)i * divisor[i];
  cout << sum << endl;
}
