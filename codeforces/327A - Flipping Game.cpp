#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    int countOne(0), sum(0), maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a)
        {
            countOne++;
            sum--;
            if (sum < 0)
                sum = 0;
        }
        else
            sum++;

        maxSum = max(sum, maxSum);
    }
    (countOne == n) ? cout << countOne - 1 : cout << countOne + maxSum;

    return 0;
}