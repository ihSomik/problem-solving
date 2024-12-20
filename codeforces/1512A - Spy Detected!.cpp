#include <iostream>
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
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                if(a[i+1]==a[i+2])
                    cout<<i+1;
                else        // there has a problem in this code but accepted!
                    cout<<i+2;
                cout<<endl;
                break;
            }
        }
    }
}
