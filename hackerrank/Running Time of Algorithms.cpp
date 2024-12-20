#include <bits/stdc++.h>
using namespace std;

int main() {
    int count(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) {
        int val = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > val) {
            a[j + 1] = a[j];
            j--;
            count++;
        }

        a[j + 1] = val;
    }
    cout << count << endl;
}
