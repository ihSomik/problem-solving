#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x > y)
            swap(x, y);

        long long firstWay = ((y - x) * a) + (x * b);
        long long secondWay = (x + y) * a;

        cout << min(firstWay, secondWay) << endl;
    }

    return 0;
}
