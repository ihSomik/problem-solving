#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    /*
    i*j=x
    0<i,j<=n
    so, x%i=0
    */
    int count(0);
    for (int i = 1; i <= n; i++)
        if (x % i == 0 && x / i <= n)
            count++;

    cout << count << endl;
    return 0;
}
