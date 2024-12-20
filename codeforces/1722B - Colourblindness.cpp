#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;

        int flag(0);
        for (int i = 0; i < n; i++)
        {
            if ((r1[i] == 'R' && r2[i] != 'R') || (r1[i] != 'R' && r2[i] == 'R'))
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }

        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}