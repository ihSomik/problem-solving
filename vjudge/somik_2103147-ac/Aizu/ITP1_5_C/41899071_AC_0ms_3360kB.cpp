#include <iostream>
using namespace std;

int main()
{
    int r, c;
    while (cin >> r >> c)
    {
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
                if ((!(i & 1) && !(j & 1)) || ((i & 1) && (j & 1)))
                    cout << "#";
                else
                    cout << ".";
            cout << endl;
        }
        cout << endl;
    }
}
