#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }

    cout << s << endl;
    return 0;
}
