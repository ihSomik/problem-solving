
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int mx=1, mn=1000000000;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }

        cout<<mx-mn<<endl;
    }

    return 0;
}
