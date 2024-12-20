#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int minEle = INT_MAX, maxEle = INT_MIN;
        int minPos, maxPos;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < minEle)
            {
                minEle = a[i];
                minPos = i + 1; // index starts from 1
            }
            if (a[i] > maxEle)
            {
                maxEle = a[i];
                maxPos = i + 1; // index starts from 1
            }
        }

        int min_index = min(minPos, maxPos);
        int max_index = max(minPos, maxPos);

        int moves = min(max_index, min(n - min_index + 1, min_index + (n - max_index + 1)));
        cout << moves << endl;
        /*
        needed moves from left  --> max_index
        needed moves from right --> n - min_index + 1
        needed moves from both left and right --> min_index + (n - max_index + 1)
        */
    }

    return 0;
}