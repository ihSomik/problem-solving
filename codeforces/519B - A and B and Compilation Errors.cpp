#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;

    int aSum(0);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        aSum += x;
    }

    int bSum(0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        bSum += x;
    }

    int cSum(0);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> x;
        cSum += x;
    }

    cout << aSum - bSum << endl
         << bSum - cSum << endl;

    return 0;
}
