#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);

    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(b,b+m);

    int pairs=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(a[i]-b[j]) <= 1)
            {
                pairs++;
                b[j]=-2;    // this girl is excluded from array "b" so that she cannot pair with any subsequent boys from array "a"
                break;
            }
        }
    }

    cout<<pairs;
    return 0;
}
