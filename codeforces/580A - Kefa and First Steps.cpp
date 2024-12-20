#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int count=1, max=1;
    for(int i=0; i<n-1; i++)
    {
        if (a[i]<=a[i+1])
            count++;
        else
            count=1;
        if(count>max)
            max=count;
    }

    cout<<max;
    return 0;
}
