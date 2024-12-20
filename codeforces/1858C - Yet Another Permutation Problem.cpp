#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

bool check_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (!(n & 1) || !(n % 3))
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2)))
            return false;
    return true;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << 1 << " ";

        int a = 2;
        while (a <= n)
        {
            if (check_prime(a) || (!check_prime(a) && (a & 1)))
            {
                int temp = a;
                while (temp <= n)
                {
                    cout << temp << " ";
                    temp *= 2;
                }
            }
            a++;
        }
        cout << endl;
    }

    return 0;
}