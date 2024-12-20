#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> remainder(k, 0);
    int count = 0;

    for (int i = 0; i < n; i++) {
        int modVal = arr[i] % k;

        int complement = (k - modVal) % k;

        count += remainder[complement];

        // counting the number of congruent
        remainder[modVal]++;
    }

    cout << count << endl;
}
