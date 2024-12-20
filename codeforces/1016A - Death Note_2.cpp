#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int times;
    int ex_pages(0);
    for (int i = 0; i < n; i++)
    {
        times = (ex_pages + a[i]) / m;
        cout << times << " ";
        ex_pages = (ex_pages + a[i]) % m;
    }
    return 0;
}