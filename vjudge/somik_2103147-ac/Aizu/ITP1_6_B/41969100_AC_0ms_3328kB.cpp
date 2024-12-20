#include <iostream>
using namespace std;

int main()
{
    char suits[4] = {'S', 'H', 'C', 'D'};
    int ranks[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int present[4][13] = {0};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char suit;
        int rank;
        cin >> suit >> rank;
        for (int j = 0; j < 4; j++)
        {
            if (suits[j] == suit)
            {
                for (int k = 0; k < 13; k++)
                {
                    if (ranks[k] == rank)
                    {
                        present[j][k] = 1;
                        break;
                    }
                }
                break;
            }
        }
    }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            if (!present[i][j])
                cout << suits[i] << " " << ranks[j] << endl;

    return 0;
}
