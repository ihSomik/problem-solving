#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int matrix[r][c];
    int rowSum[r] = {0};
    int colSum[c] = {0};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    int totalSum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << matrix[i][j] << " ";
        cout << rowSum[i] << endl;
    }

    for (int j = 0; j < c; j++)
    {
        cout << colSum[j] << " ";
        totalSum += colSum[j];
    }
    cout << totalSum << endl;

    return 0;
}
