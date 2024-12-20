#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int dApple[m], dOrange[n];
    for (int i = 0; i < m; i++) cin >> dApple[i];
    for (int i = 0; i < n; i++) cin >> dOrange[i];

    int countA(0), countO(0);
    for (int i = 0; i < m; i++)
        if (a + dApple[i] >= s && a + dApple[i] <= t) countA++;
    for (int i = 0; i < n; i++)
        if (b + dOrange[i] >= s && b + dOrange[i] <= t) countO++;

    cout << countA << endl
         << countO << endl;
}
