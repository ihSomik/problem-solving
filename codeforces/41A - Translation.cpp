#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    string s,t;
    cin>>s>>t;

    for(i=0, j=s.length()-1; i<s.length(); i++,j--)
    {
        if (s[i] != t[j])
        {
            cout<< "NO";
            return 0;
        }
    }

    cout<< "YES";
    return 0;
}
//There is a problem with this program. Can you figure it out?
