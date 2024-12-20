#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int s[n];

        for(int i=0; i<n; i++)
            cin>>s[i];

        sort(s,s+n);

        int min_value=s[n-1];

        for(int i=0; i<n-1; i++)
        {
            min_value=min(min_value , s[i+1]-s[i]);
        }

        cout<<min_value<<endl;
    }

    return 0;
}
