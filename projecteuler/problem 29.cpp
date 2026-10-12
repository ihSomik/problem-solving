// https://projecteuler.net/problem=29
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

/*
    IDEA:
    -----
    Every integer can be uniquely represented by its prime factorization:
        n = p1^e1 * p2^e2 * p3^e3 * ...

    For a^b:
        if a = p1^e1 * p2^e2 * ...
        then a^b = p1^(e1*b) * p2^(e2*b) * ...

    Therefore:
        Instead of computing large numbers like 99^100,
        we store the vector of exp (e1*b, e2*b, e3*b, ...).

    Two numbers a^b and c^d are equal IF AND ONLY IF their exponent vectors
   match.

    So we:
      1. Precompute primes up to 100.
      2. For each a in [2, 100], factorize a into prime exp.
      3. For each b in [2, 100], multiply all exp by b.
      4. Store the resulting exponent vector in a set.
      5. The set size = number of distinct a^b values.
*/

int main() {
  fastread();
  vector<int> primes;
  vector<bool> isPrime(101, true);

  for (int i = 2; i <= 100; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      for (int j = i * i; j <= 100; j += i) isPrime[j] = false;
    }
  }

  // A set of exponent vectors, representing unique numbers
  set<vector<int>> distinct;

  for (int a = 2; a <= 100; a++) {
    vector<int> base(primes.size(), 0);

    int x = a;
    for (int i = 0; i < primes.size(); i++) {
      while (x % primes[i] == 0) {
        base[i]++;
        x /= primes[i];
      }
    }

    for (int b = 2; b <= 100; b++) {
      vector<int> exp = base;
      // Multiply each exponent by b
      for (int i = 0; i < exp.size(); i++) exp[i] = exp[i] * b;
      distinct.insert(exp);
    }
  }

  cout << distinct.size() << endl;
}
