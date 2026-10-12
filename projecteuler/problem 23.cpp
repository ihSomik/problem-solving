// https://projecteuler.net/problem=23
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main() {
  const int n = 28123;
  vector<bool> is_abundant(n + 1, false);

  for (int i = 1; i <= n; i++) {
    int div_sum = 1;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        div_sum += j;
        if (j != i / j) div_sum += i / j;
      }
    }
    if (div_sum > i) is_abundant[i] = true;
  }

  vector<int> abndnt_nums;
  for (int i = 1; i <= n; i++)
    if (is_abundant[i]) abndnt_nums.push_back(i);

  vector<bool> possible_sum(n + 1, false);
  for (int i = 0; i < abndnt_nums.size(); i++) {
    for (int j = i; j < abndnt_nums.size(); j++) {
      int sum = abndnt_nums[i] + abndnt_nums[j];
      if (sum <= n)
        possible_sum[sum] = true;
      else
        break;
    }
  }

  ll total_sum = 0;
  for (int i = 1; i <= n; i++)
    if (!possible_sum[i]) total_sum += i;

  cout << total_sum << endl;
}
