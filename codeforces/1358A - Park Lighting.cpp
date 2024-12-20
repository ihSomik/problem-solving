#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int num_of_lanterns=ceil(n*m/2.0);
        cout<<num_of_lanterns<<endl;
    }
    return 0;
}
