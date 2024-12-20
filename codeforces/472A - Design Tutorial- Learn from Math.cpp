#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    bool is_prime = true;

    if (n==2)
        return is_prime;

    if (n<2 || n%2==0)
        return is_prime = false;

    for (int i=3; i<= sqrt(n); i+=2)
    {
        if (n%i==0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main()
{
    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<4<<" "<<n-4;
        return 0;
    }

    for(int x=4; x<n; x++)
    {
        int y=n-x;
        if(!is_prime(x) && !is_prime(y))
        {
            cout<<x<<" "<<y;
            return 0;
        }
    }
}
