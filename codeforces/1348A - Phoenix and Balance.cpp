#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        /*
            for n=4, the series is 2+4+8+16
            the difference between a and b will be minimized if,
                a=16+2
                b=4+8
        */
        int a=pow(2,n);
        for(int i=1; i<n/2; i++)
            a+=pow(2,i);

        int b=0;
        for(int i=n/2; i<n; i++)
            b+=pow(2,i);

        cout<<a-b<<endl;
    }
    return 0;
}
