#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        int penalty[n] = {0};
        int points[n] = {0};

        for (int i = 0; i < n; i++)
        {
            int t[m];

            for (int j = 0; j < m; j++)
                cin >> t[j];

            sort(t, t + m);

            int duration(0);
            for (int k = 0; k < m; k++)
            {
                duration += t[k];
                penalty[i] += penalty[i] + t[k];
                if (duration > h)
                    break;
                points[i]++;
            }
        }

        int position(1);
        int maxPoint = points[0];
        for (int i = 1; i < n; i++)
        {
            if ((points[i] > maxPoint) || (points[i] == maxPoint && penalty[i] < penalty[0]))
                position++;
        }
        cout << position << endl;
    }

    return 0;
}