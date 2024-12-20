#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        int a[n];

        int sum(0);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        int count(0);
        for(int i=0; i<n; i++)
            if( (a[i]+k) > (sum-a[i]) )
                count++;

        cout<<count<<endl;
    }
    return 0;
}
