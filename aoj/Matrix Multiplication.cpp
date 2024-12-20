#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    long long firstMatrix[n][m], secondMatrix[m][l], resMatrix[n][l];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> firstMatrix[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < l; j++)
            cin >> secondMatrix[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < l; j++) {
            resMatrix[i][j] = 0;
            for (int k = 0; k < m; k++)
                resMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << resMatrix[i][j];
            if (j != l - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
