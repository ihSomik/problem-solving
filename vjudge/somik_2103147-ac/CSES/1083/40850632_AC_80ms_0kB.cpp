#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<n; i++)
        cin>>a[i];

    sort(a+1,a+n);

    int flag(0);
    for(int i=1; i<n; i++)
    {
        if(a[i]!=i)
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
    }

    if(!flag)
        cout<<n<<endl;

    return 0;
}
