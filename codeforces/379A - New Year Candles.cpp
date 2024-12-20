#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int candles=a;

    while(a>=b)
    {
        candles+=a/b;
        a=(a/b)+(a%b);
    }

    cout<<candles;
    return 0;
}
