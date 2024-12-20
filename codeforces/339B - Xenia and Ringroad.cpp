#include<iostream>
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

    long long time=0;

    time=a[0]-1;    // required time to go house a[0] from house 1

    for(int i=0; i<m-1; i++)
    {
        if(a[i+1]>=a[i])
            time+=a[i+1]-a[i];  // for example: required time to go house 2 to 3
        else
            time+=n-(a[i]-a[i+1]);  // for example: required time to go house 3 to 2
    }

    cout<<time;

    return 0;
}
