#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X;
  cin >> X;

  long long factorial = 1;
  int N = 1;

  while (factorial < X) {
    N++;
    factorial *= N;
  }

  cout << N << endl;

  return 0;
}
