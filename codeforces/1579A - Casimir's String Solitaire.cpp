#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int A(0), B(0), C(0);
        for (int i = 0; i < s.length(); i++)
        {
            A += (s[i] == 'A');
            B += (s[i] == 'B');
            C += (s[i] == 'C');
        }

        (A + C == B) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
