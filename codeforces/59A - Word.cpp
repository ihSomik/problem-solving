#include <iostream>
using namespace std;

int main ()
{
    int upper=0, lower=0;
    string s;
    cin>>s;

    for (int i=0; i<s.length(); i++)
    {   if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    if (upper>lower)
        for (int i=0; i<s.length(); i++)
        {
            s[i]=towupper(s[i]);
        }
    else
        for (int i=0; i<s.length(); i++)
        {
            s[i]=towlower(s[i]);
        }

    cout<<s;

    return 0;
}
