#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];

    int countA(0), countB(0);

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            countA++;
        else if (a[i] < b[i])
            countB++;
    }
    cout << countA << ' ' << countB << endl;
}