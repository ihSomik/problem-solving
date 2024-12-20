#include <bits/stdc++.h>
using namespace std;

bool customComparator(string a, string b) {
    if (a.length() != b.length())
        return a.length() < b.length();

    return a < b;
}

int main() {
    int n;
    cin >> n;
    vector<string> numbers(n);

    for (int i = 0; i < n; i++) cin >> numbers[i];

    sort(numbers.begin(), numbers.end(), customComparator);

    for (string num : numbers) cout << num << endl;
}
