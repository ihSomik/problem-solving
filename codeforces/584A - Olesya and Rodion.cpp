#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;

    if(n==1 && t==10)
        cout<<-1;
    else if(n>=2 && t==10)
    {
        for(int i=1; i<n; i++)
            cout<<1;
        cout<<0;
    }
    else
    {
        while(n--)
            cout<<t;
    }

    return 0;
}
