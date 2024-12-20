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

        int firstElev = a - 1;
        int secondElev = abs(c - b) + c - 1;

        if (firstElev < secondElev)
            cout << "1" << endl;
        else if (firstElev > secondElev)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}
