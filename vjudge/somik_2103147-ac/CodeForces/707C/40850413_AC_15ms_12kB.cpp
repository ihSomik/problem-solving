#include<iostream>
using namespace std;

int main()
{
    long long n, m, k;
    cin>>n;

    if(n<=2)
        cout<<"-1";
    else if(n&1)
    {
        m=((n*n)+1)/2;
        k=m-1;
        if(m>0 && k>0)
            cout<<m<<" "<<k;
        else
            cout<<"-1";
    }
    else if(!(n&1))
    {
        m=n*n/4;    // Squares of even numbers are even, and are divisible by 4, since (2n)^2 = 4n^2
        k=m+1;
        m--;
        cout<<m<<" "<<k;
    }

    return 0;
}
