#include <iostream>
using namespace std;

int main()
{
    string s;
    while (1)
    {
        cin >> s;
        int len = s.length();
        if (s == "0")
            break;

        int sum(0);
        for (int i = 0; i < len; i++)
            sum += s[i] - '0';

        cout << sum << endl;
    }
    return 0;
}
