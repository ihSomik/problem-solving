#include <iostream>
#include <cmath>
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
    int n;
    cin >> n;
    long long x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        long long square_root = sqrt(x);

        if (square_root * square_root != x) // checking square root of x is int or float
            cout << "NO\n";
        else // if square root of x is a prime number than x is a T-prime number
        {
            if (check_prime(square_root))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
