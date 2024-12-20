#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        //  the maximum value of gcd(a,b) among all 1≤a<b≤n = n/2
        cout<<n/2<<endl;
    }

    return 0;
}

