#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin>>n;
    int range[n+1];
    int sum(0);
    for (int i=1; i<=n; i++)
    {
        cin>>a;
        sum+=a;
        range[i]=sum;
    }

    int index=1, worms[sum+1];
    for (int i=1; i<=sum; i++)
    {
        if (i > range[index])
            index++;
        worms[i]=index;
    }

    int m, q;
    cin>>m;
    for (int i=1; i<=m; i++)
    {
        cin>>q;
        cout<<worms[q]<<endl;
    }

    return 0;
}
