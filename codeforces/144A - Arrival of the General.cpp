#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int mx=0, maxi, mn=101, mini;

    for (int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]>mx)
        {
            mx=a[i];
            maxi=i;
        }

        if(a[i]<=mn)
        {
            mn=a[i];
            mini=i;
        }
    }

    if (maxi>mini)
        mini++;
    cout<<maxi+(n-1-mini);

    return 0;
}
