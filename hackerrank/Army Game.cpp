#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int pack = (n / 2) * (m / 2);

    int extraBase(0);
    if (n & 1) extraBase += m;
    if (m & 1) extraBase += n;

    pack += extraBase / 2;

    cout << pack << endl;
}
