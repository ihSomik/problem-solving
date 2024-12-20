#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int coins[3], n;
        cin>>coins[0]>>coins[1]>>coins[2]>>n;
        sort(coins,coins+3);
        int shortage_coins=(coins[2]-coins[1]) + (coins[2]-coins[0]);

        if(n>=shortage_coins)
        {
            n=n-shortage_coins;
            if(n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
