#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int count[100] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count[arr[i]]++;
    }

    for (int i = 0; i < 100; i++) cout << count[i] << " ";
    cout << endl;
}
