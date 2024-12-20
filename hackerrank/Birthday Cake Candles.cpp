#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> &candles) {
    int tallest = candles[0];

    for (int C : candles)
        if (C > tallest)
            tallest = C;

    int count(0);
    for (int C : candles)
        if (C == tallest)
            count++;

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> candles(n);
    for (int i = 0; i < n; i++) cin >> candles[i];

    cout << birthdayCakeCandles(candles) << endl;
}
