#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[m];

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);
    int temp, dif=a[m-1]-a[0];

    for(int i=0; i<=m-n; i++)
    {
        temp=a[n-1+i]-a[i];
        dif=min(temp,dif);
    }

    cout<<dif;
    return 0;
}
