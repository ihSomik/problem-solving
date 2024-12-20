#include <bits/stdc++.h>
using namespace std;

// finding median by counting sort
double median(vector<int> arr, int n, int d) {
    int minVal = *min_element(arr.begin(), arr.begin() + n);
    int maxVal = *max_element(arr.begin(), arr.begin() + n);

    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);

    for (int i = n - d; i < n; i++)
        count[arr[i] - minVal]++;

    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];

    vector<int> sortedArray(n);

    for (int i = n - 1; i >= n - d; i--)
        sortedArray[--count[arr[i] - minVal]] = arr[i];

    if (n & 1)
        return sortedArray[n / 2];
    else
        return (sortedArray[n / 2 - 1] + sortedArray[n / 2]) / 2.0;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> e(n);
    for (int i = 0; i < n; i++) cin >> e[i];

    int count(0);
    for (int i = d; i < n; i++)
        if (e[i] >= 2 * median(e, i, d))
            count++;

    cout << count << endl;
}
