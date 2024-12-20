#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int p, a[200];
    cin>>p;
    for(int i=0; i<p; i++)
    {
        cin>>a[i];
    }

    int q;
    cin>>q;
    for(int i=p; i<p+q; i++)
    {
        cin>>a[i];
    }

    sort(a, a+p+q);

    int count=0;
    for(int i=0; i<p+q; i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }

    if(count==n)
        cout<< "I become the guy.";
    else
        cout<< "Oh, my keyboard!";

    return 0;
}
