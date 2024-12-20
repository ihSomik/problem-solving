#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w, h, n;
        cin>>w>>h>>n;
        int pieces=1;

        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        while(!(w&1))
        {
            pieces*=2;
            w/=2;
        }
        while(!(h&1))
        {
            pieces*=2;
            h/=2;
        }

        if(pieces>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
