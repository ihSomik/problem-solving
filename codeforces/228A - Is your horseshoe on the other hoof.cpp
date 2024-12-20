#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[4], count=0;

    for(int i=0; i<4; i++)
    {
        cin>>n[i];
    }

    sort (n,n+4);

    for( int i=0; i<3; i++)
    {
        if(n[i]==n[i+1])
            count++;
    }

    cout<<count;
    return 0;
}
