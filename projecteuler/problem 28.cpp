// https://projecteuler.net/problem=28
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

/*
    We start with the number 1 in the center of a square spiral
    and move to the right in a clockwise direction.

    Example for a 5x5 spiral:

        21 22 23 24 25
        20  7  8  9 10
        19  6  1  2 11
        18  5  4  3 12
        17 16 15 14 13

    The diagonal numbers (from top-left to bottom-right
    and top-right to bottom-left) are:

        21, 7, 1, 3, 13, 17, 5, 9, 25

    If we sum only the diagonal numbers in the 5x5 case,
    we get 101.

    The question asks for the diagonal sum of a 1001 x 1001 spiral.

    OBSERVATION (Pattern in layers):
    - The spiral grows in "layers" around the center.
    - Layer 0: just the single center 1   → side length = 1
    - Layer 1: numbers up to 3x3 spiral   → side length = 3
    - Layer 2: numbers up to 5x5 spiral   → side length = 5
      and so on.

    For each layer k (k = 0, 1, 2, ...):
    - The side length of layer k is s = 2k + 1

    The four corner numbers of this s×s square are:
        1) top-right     = s^2
        2) top-left      = s^2 - (s - 1)
        3) bottom-left   = s^2 - 2*(s - 1)
        4) bottom-right  = s^2 - 3*(s - 1)

    Example:
      For s = 5  (k = 2):
        Corners = 25, 21, 17, 13
        Sum = 76
      For s = 3  (k = 1):
        Corners = 9, 7, 5, 3
        Sum = 24

    Sum of corners for side length s:
      cornerSum(s) =  4*s^2 - 6s + 6

      Substitute s = 2k + 1:
      cornerSum(k) = 4*(2k + 1)^2 - 12*k

      Total diagonal sum for n x n spiral:
      sum = 1 + Σ [k = 1 → (n - 1)/2] (4*(2k + 1)^2 - 12*k)

      - The "+1" is for the center.
      - Each term adds the four corners of one square layer.
*/

int main() {
  int n = 1001;
  ll sum = 1;                // starting with the center value
  int layers = (n - 1) / 2;  // number of layers
  for (ll k = 1; k <= layers; k++) {
    ll s = 2 * k + 1;           // side length of the current layer
    sum += 4 * s * s - 12 * k;  // adding corner sums
  }
  cout << sum << endl;
}
