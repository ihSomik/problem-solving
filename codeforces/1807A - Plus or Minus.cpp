#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        (a + b == c) ? cout << "+" << endl : cout << "-" << endl;
    }
    return 0;
}
