#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long expectedSum = n * (n + 1) / 2;

    long long sum(0);
    for (long long i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }

    cout << expectedSum - sum << endl;

    return 0;
}
