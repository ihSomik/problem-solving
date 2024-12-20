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

        if (!(n % 4)) // n/2 should be an even number to fulfill the condition (evenSum=oddSum)
        {
            cout << "YES" << endl;

            int evenSum(0), oddSum(0);

            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                evenSum += i;
            }

            for (int i = 1; i < n - 1; i += 2) // the last odd number less than n cannot be taken
            {
                cout << i << " ";
                oddSum += i;
            }
            cout << evenSum - oddSum << endl;
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}