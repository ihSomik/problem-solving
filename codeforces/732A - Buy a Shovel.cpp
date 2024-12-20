#include<iostream>
using namespace std;

int main()
{
    int k, r, i, sum;
    cin>>k>>r;

    for(i=1; ; i++)
    {
        sum=k*i;
        if(sum%10==0 || sum%10==r)
            break;
    }

    cout<<i;
    return 0;
}
