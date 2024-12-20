#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=n/2;

    cout<<k<<endl;

    if(n%2==0)
    {
        while(k--)
            cout<<2<<" ";
    }
    else
    {
        k=(n-3)/2;
        while(k--)
            cout<<2<<" ";
        cout<<3;
    }

    return 0;
}
