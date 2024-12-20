#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    // n=2*(l+w)
    if (n & 1)
        cout << 0 << endl;

    else
    {
        n = n / 2; // n/2=l+w
        if (!(n & 1))
            cout << n / 2 - 1 << endl;
        else
            cout << n / 2 << endl;
    }

    return 0;
}
