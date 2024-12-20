// Time limit exceeded on test 3
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int max_gcd=1;
        int n;
        cin>>n;

        for(int i=2; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
                max_gcd=max(__gcd(i,j),max_gcd);
        }

        cout<<max_gcd<<endl;
    }

    return 0;
}
