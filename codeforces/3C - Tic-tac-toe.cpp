#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int checkBoard(char a[3][3], char c)
{
    /*
        00 01 02
        10 11 12
        20 21 22
    */
    int count;

    for (int i = 0; i < 3; i++) // checking row
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == c)
                count++;
        }
        if (count == 3)
            return 1;
    }

    for (int i = 0; i < 3; i++) // checking column
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[j][i] == c)
                count++;
        }
        if (count == 3)
            return 1;
    }

    count = 0;
    for (int j = 0; j < 3; j++) // checking main diagonal
    {
        if (a[j][j] == c)
            count++;
    }
    if (count == 3)
        return 1;

    count = 0;
    for (int i = 0, j = 2; i < 3; i++, j--) // checking antidiagonal
    {
        if (a[i][j] == c)
            count++;
    }
    if (count == 3)
        return 1;

    return 0;
}

int main()
{
    fastread();

    char a[3][3];
    int countX(0), count0(0);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'X')
                countX++;
            else if (a[i][j] == '0')
                count0++;
        }

    if (countX < count0 || countX - count0 > 1 || (checkBoard(a, 'X') && countX == count0) || (checkBoard(a, '0') && countX != count0))
        cout << "illegal" << endl;
    else if (checkBoard(a, 'X'))
        cout << "the first player won" << endl;
    else if (checkBoard(a, '0'))
        cout << "the second player won" << endl;
    else if (countX == count0)
        cout << "first" << endl;
    else if (countX > count0 && countX + count0 != 9)
        cout << "second" << endl;
    else
        cout << "draw" << endl;

    return 0;
}