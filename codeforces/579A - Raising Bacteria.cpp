#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;    // here, "count" is the number of '1' in binary of "n"

    while(n)
    {
        if(n%2==1)
            count++;
        n/=2;
    }

    cout<<count;
    return 0;
}
