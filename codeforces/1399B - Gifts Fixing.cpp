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
        int a[n], b[n];
        int min_of_a=INT_MAX;
        int min_of_b=INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<min_of_a)
                min_of_a=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]<min_of_b)
                min_of_b=b[i];
        }

        long long moves=0;

        for(int i=0; i<n; i++)
        {
            int x=a[i]-min_of_a;
            int y=b[i]-min_of_b;
            moves+=max(x,y);
        }

        cout<<moves<<endl;
    }

    return 0;
}
