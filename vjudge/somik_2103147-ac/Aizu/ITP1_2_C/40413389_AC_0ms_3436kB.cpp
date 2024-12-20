#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[3];
    for(int i=0; i<3; i++)
    {
        cin>>s[i];
    }

    sort(s,s+3);

    for(int i=0; i<3; i++)
    {
        if(i==2)
            cout<<s[i];
        else
            cout<<s[i]<<" ";
    }

    cout<<endl;
    return 0;
}
