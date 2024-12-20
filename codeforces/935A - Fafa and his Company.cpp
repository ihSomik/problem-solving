#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    double sqrt_of_n=sqrt(n);

    for(int i=2; i<sqrt_of_n; i++)
    {
        if(n%i==0)
            count+=2;
    }

    if(sqrt_of_n==(int) sqrt_of_n)
        count++;

    cout<<count<<endl;
    return 0;
}
