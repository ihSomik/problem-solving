// Time limit exceeded on test 6
#include <iostream>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    int count(0);
    for (long long i = 1; i <= n; i++)
        for (long long j = 1; j <= n; j++)
            if (i * j == x)
                count++;

    cout << count << endl;

    return 0;
}
