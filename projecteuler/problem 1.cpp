// https://projecteuler.net/problem=1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll sum(0);
  for (int i = 3; i < 1000; i++)
    if (i % 3 == 0 || i % 5 == 0) sum += i;
  cout << sum << endl;
}