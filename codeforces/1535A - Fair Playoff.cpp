#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s[4];
        for(int i=0; i<4; i++)
            cin>>s[i];

        int max1=max(s[0],s[1]);
        int max2=max(s[2],s[3]);

        if(max1<max2)
            swap(max1,max2);

        sort(s,s+4);

        if(max1==s[3] && max2==s[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
