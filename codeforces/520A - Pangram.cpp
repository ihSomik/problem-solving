#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pass=1;
    cin>>n;
    string s;
    cin>>s;

    if(n<26)
    {
        cout<< "NO";
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }

    sort(s.begin(),s.end());

    for(int i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
            pass++;
    }

    if(pass==26)
        cout<< "YES";
    else
        cout<< "NO";
    return 0;
}
