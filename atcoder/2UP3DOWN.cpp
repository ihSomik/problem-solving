#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (x < y)
    cout << ((y - x > 2) ? "No" : "Yes");
  else
    cout << ((x - y > 3) ? "No" : "Yes");
  cout << endl;
}