#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int checkResult(char a[4][4])
{
    int Xs, countEmpty;
    /*
    00 01 02 03
    10 11 12 13
    20 21 22 23
    30 31 32 33
    */
    for (int i = 0; i < 4; i++) // checking in every row
    {
        for (int k = 0; k < 2; k++)
        {
            Xs = 0, countEmpty = 0;
            for (int j = k; j < k + 3; j++)
            {
                if (a[i][j] == 'x')
                    Xs++;
                else if (a[i][j] == '.')
                    countEmpty++;
            }
            if (Xs == 2 && countEmpty == 1)
                return 1;
        }
    }

    for (int i = 0; i < 4; i++) // checking in every column
    {
        for (int k = 0; k < 2; k++)
        {
            Xs = 0, countEmpty = 0;
            for (int j = k; j < k + 3; j++)
            {
                if (a[j][i] == 'x')
                    Xs++;
                else if (a[j][i] == '.')
                    countEmpty++;
            }
            if (Xs == 2 && countEmpty == 1)
                return 1;
        }
    }

    for (int k = 0; k < 2; k++) // checking in main diagonal
    {
        Xs = 0, countEmpty = 0;
        for (int j = k; j < k + 3; j++)
        {
            if (a[j][j] == 'x')
                Xs++;
            else if (a[j][j] == '.')
                countEmpty++;
        }
        if (Xs == 2 && countEmpty == 1)
            return 1;
    }

    for (int k = 0; k < 2; k++) // checking in antidiagonal
    {
        Xs = 0, countEmpty = 0;
        for (int i = k, j = 3 - k; i < 3 + k; i++, j--)
        {
            if (a[i][j] == 'x')
                Xs++;
            else if (a[i][j] == '.')
                countEmpty++;
        }
        if (Xs == 2 && countEmpty == 1)
            return 1;
    }

    // checking negative slope diagonals
    Xs = 0, countEmpty = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i][i + 1] == 'x')
            Xs++;
        else if (a[i][i + 1] == '.')
            countEmpty++;
    }
    if (Xs == 2 && countEmpty == 1)
        return 1;

    Xs = 0, countEmpty = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i + 1][i] == 'x')
            Xs++;
        else if (a[i + 1][i] == '.')
            countEmpty++;
    }
    if (Xs == 2 && countEmpty == 1)
        return 1;

    // checking positive slope diagonals
    Xs = 0, countEmpty = 0;
    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        if (a[i][j] == 'x')
            Xs++;
        else if (a[i][j] == '.')
            countEmpty++;
    }
    if (Xs == 2 && countEmpty == 1)
        return 1;

    Xs = 0, countEmpty = 0;
    for (int i = 1, j = 3; i < 4; i++, j--)
    {
        if (a[i][j] == 'x')
            Xs++;
        else if (a[i][j] == '.')
            countEmpty++;
    }
    if (Xs == 2 && countEmpty == 1)
        return 1;

    return 0;
}

int main()
{
    fastread();

    char a[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    if (checkResult(a))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}