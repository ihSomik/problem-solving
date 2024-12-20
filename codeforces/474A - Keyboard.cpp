#include <iostream>
using namespace std;

int findInd(char ch, string keyboard)
{
    int len = keyboard.length();
    for (int i = 0; i < len; i++)
        if (keyboard[i] == ch)
            return i;
}

int main()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    int len = s.length();

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string newstr;

    if (c == 'R')
    {
        for (int i = 0; i < len; i++)
        {
            int index = findInd(s[i], keyboard);
            newstr += keyboard[index - 1];
        }
    }
    else if (c == 'L')
    {
        for (int i = 0; i < len; i++)
        {
            int index = keyboard.find(s[i]);
            newstr += keyboard[index + 1];
        }
    }

    cout << newstr;

    return 0;
}