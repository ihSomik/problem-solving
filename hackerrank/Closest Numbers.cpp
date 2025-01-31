#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int>& arr, int n) {
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);

    // Count occurrences of each element
    for (int num : arr)
        count[num - minVal]++;

    // Calculate prefix sums in count[]
    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];

    vector<int> sortedArray(n);

    for (int i = n - 1; i >= 0; i--)
        sortedArray[--count[arr[i] - minVal]] = arr[i];

    arr = sortedArray;
}

void closestNumbers(vector<int>& arr, int n) {
    int minDiff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        minDiff = min(diff, minDiff);
    }
    for (int i = 1; i < n; i++)
        if (arr[i] - arr[i - 1] == minDiff) cout << arr[i - 1] << ' ' << arr[i] << ' ';
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    countSort(arr, n);
    closestNumbers(arr, n);
}
