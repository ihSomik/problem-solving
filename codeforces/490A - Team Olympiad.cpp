#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    int cnt[4] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        cnt[t[i]]++;
    }

    int w = min(cnt[1], min(cnt[2], cnt[3]));
    cout << w << endl;

    int i = 0, j = 0, k = 0;
    while (w--)
    {
        while (t[i] != 1)
            i++;
        while (t[j] != 2)
            j++;
        while (t[k] != 3)
            k++;

        i++;
        j++;
        k++;

        cout << i << " " << j << " " << k << endl;
    }
    return 0;
}
