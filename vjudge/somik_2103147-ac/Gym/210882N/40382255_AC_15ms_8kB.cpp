#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long sum;
    cin>>n;
    if(n%2==0)
        sum=(n/2)*(n+1);
    else
        sum=((n+1)/2)*n;
    cout<<sum<<endl;
    return 0;
}


