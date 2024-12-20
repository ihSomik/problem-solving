#include <iostream>
using namespace std;

int main()
{
    string s1="hello", s;
    cin>>s;
    int x=0, count=0;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i]==s1[x])
        {
            x++;
            count++;
        }
    }

    if (count==5)
        cout<< "YES";
    else
        cout<< "NO";

    return 0;
}
