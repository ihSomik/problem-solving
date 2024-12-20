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

    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                //we could use this 'swap' function instead
                //swap(a[i],a[j]);
            }
        }
    }

    //we could use this 'sort' function instead
    //sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
