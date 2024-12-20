#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int problems[26] = {0};
        int balloons(0);

        for (int i = 0; i < n; i++)
        {
            problems[s[i] - 'A']++;

            if (problems[s[i] - 'A'] == 1)
                balloons += 2;
            else
                balloons++;
        }

        cout << balloons << endl;
    }
    return 0;
}
