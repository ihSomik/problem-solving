#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int findLCM(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; ++i)
        result = lcm(result, arr[i]);

    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << findLCM(arr, n) << endl;

    return 0;
}
