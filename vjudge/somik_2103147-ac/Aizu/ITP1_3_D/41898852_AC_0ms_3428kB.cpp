#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    for (int i = a; i <= b; i++)
        if (!(c % i))
            count++;
    cout << count << endl;
}
