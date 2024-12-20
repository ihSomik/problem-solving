// Apple Division
// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(int idx, int* weights, ll weight1, ll weight2, int n) {
    if (idx == n) return abs(weight1 - weight2);

    ll first_choice_diff = solve(idx + 1, weights, weight1 + weights[idx], weight2, n);   // including the current apple in the first group
    ll second_choice_diff = solve(idx + 1, weights, weight1, weight2 + weights[idx], n);  // including the current apple in the second group

    return min(first_choice_diff, second_choice_diff);  // minimum difference of both choices
}

int main() {
    int n;
    cin >> n;
    int weights[n];
    for (int i = 0; i < n; ++i) cin >> weights[i];

    int minimum_difference = solve(0, weights, 0, 0, n);
    cout << minimum_difference << endl;
}
