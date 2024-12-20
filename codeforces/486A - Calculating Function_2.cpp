#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    /*f(4)=2=4/2
      f(5)=-3=-(5/2+1)*/

    if (n%2==0)
        cout<<n/2;
    else
        cout<<-(n/2+1);

    return 0;
}
