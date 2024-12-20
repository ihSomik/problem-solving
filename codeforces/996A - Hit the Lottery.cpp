#include<iostream>
using namespace std;

int main()
{
    int n, bills=0;
    cin>>n;
    int m[5]={100,20,10,5,1};

    for(int i=0; i<5; i++)
    {
        bills+=n/m[i];
        n=n%m[i]; // rest money
    }

    cout<<bills;
    return 0;
}
