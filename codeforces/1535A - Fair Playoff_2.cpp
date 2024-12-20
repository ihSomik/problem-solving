#include <iostream>
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
        int min1=min(s[0],s[1]);
        int min2=min(s[2],s[3]);

        if(max1>min2 && max2>min1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
