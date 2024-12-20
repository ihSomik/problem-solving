#include<iostream>
using namespace std;

int main()
{
    /*
    n - the number of rides he has planned
    m - the number of rides covered by the m ride ticket
    a - the price of a one ride ticket
    b — the price of an m ride ticket
    */
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    if(b/m>=a)      // if combo ticket price per ride is more than single ticket price
        cout<<n*a;
    else if(n%m==0) // if combo ticket price per ride is less than single ticket price
        cout<<(n/m)*b;
    else            // if there are any rides left after purchasing combo tickets
    {
        if((n%m)*a > b)     //  if the remaining rides cost less on combo tickets, for example: 5 2 3 2
            cout<<(n/m)*b + b;
        else                // if the remaining rides cost less on single tickets, for example: 5 2 2 3
        cout<<(n/m)*b + (n%m)*a;
    }

    return 0;
}
