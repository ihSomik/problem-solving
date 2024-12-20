#include<iostream>
using namespace std;

int main()
{
    long long n, sum=0, temp;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
            temp=-i;
        else
            temp=i;

        sum+=temp;
    }
    cout<<sum;
    return 0;
}
