#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int n, x;
        cin >> n >> x;
        if (!n && !x)
            break;

        int count(0);
        for (int i = 1; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k <= n; k++)
                    if (i + j + k == x)
                        count++;

        cout << count << endl;
    }
    return 0;
}
