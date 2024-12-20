// Apartments
// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int j = 0; j < m; j++)
        cin >> b[j];
    sort(b.begin(), b.end());

    int applicants(0), i(0), j(0);

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k) // found perfect apartment
        {
            i++;
            j++;
            applicants++;
        }
        else if (a[i] > b[j]) // move to the next apartment to find a larger apartment
            j++;
        else // desired apartment is too small, skip that applicant
            i++;
    }
    cout << applicants << endl;

    return 0;
}