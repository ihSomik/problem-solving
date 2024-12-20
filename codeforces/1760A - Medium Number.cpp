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

        int Min = min(c, min(a, b));
        int Max = max(c, max(a, b));
        int mid = a ^ b ^ c ^ Min ^ Max; // xor operator cancels out all the information of Min & Max, leaving us only with the medium number.

        cout << mid << endl;
    }
}