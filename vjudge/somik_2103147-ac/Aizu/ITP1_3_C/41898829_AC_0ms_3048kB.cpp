#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (!x && !y)
            break;
        else
        {
            if (x > y)
            {
                int temp = x;
                x = y;
                y = temp;
            }
        }
        cout << x << " " << y << endl;
    }
}
