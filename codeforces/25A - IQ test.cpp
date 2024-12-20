#include<iostream>
using namespace std;

int main()
{
    int n, even=0, odd=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    if(even==1)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }

    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
}
