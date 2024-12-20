#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int x=n-1;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[x]=a[i];
        x--;
    }


    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";

    cout<<endl;

    return 0;
}
