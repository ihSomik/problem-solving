#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int high_jumps(0);
        int low_jumps(0);
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
                low_jumps++;
            else if(a[i]<a[i+1])
                high_jumps++;
        }
        cout<<"Case "<<c<<": "<<high_jumps<<" "<<low_jumps<<endl;
    }

    return 0;
}
