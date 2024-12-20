#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];

    int maxima(0), minima = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > maxima)
            maxima = b[i];
        if (b[i] < minima)
            minima = b[i];
    }

    unsigned long long maxCount(0), minCount(0);
    for (int i = 0; i < n; i++)
    {
        if (b[i] == maxima)
            maxCount++;
        if (b[i] == minima)
            minCount++;
    }

    cout << maxima - minima << " ";
    maxima == minima ? cout << maxCount * minCount / 4 : cout << minCount * maxCount;
    cout << endl;

    return 0;
}
