#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, d=0;
    cin>>n>>l;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=0; i<n-1; i++)
    {
        int temp=a[i+1]-a[i];
        d=max(temp,d);
    }

    double r=max(a[0],l-a[n-1]);
    r=max(r,d/2.0);

    cout<<fixed<<setprecision(10)<<r;

    return 0;
}
