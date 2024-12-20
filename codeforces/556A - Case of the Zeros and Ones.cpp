#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int zeroCnt(0), oneCnt(0);
    while (n--)
        (s[n] == '0') ? zeroCnt++ : oneCnt++;

    cout << s.length() - 2 * min(zeroCnt, oneCnt);

    return 0;
}