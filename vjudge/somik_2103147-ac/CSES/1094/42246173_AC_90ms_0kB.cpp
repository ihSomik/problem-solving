#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long prev, curr, moves(0);
    cin >> prev;

    for (long long i = 1; i < n; i++)
    {
        cin >> curr;
        if (prev > curr)
            moves += prev - curr;
        else
            prev = curr;
    }

    cout << moves << endl;

    return 0;
}
