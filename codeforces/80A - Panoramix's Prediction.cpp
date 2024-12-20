#include <bits/stdc++.h>
using namespace std;


bool is_prime(int m)
{
    bool is_prime = true;

    if (m==2)
        return is_prime;

    if (m<2 || !(m & 1))
        return is_prime = false;

    for (int i=3; i<= sqrt(m); i+=2)
    {
        if (m%i==0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}


int main()
{
    int n, m;
    cin>>n>>m;
    while(n<=m)
    {
        n++;
        if(is_prime(n))
        {
            if(n<m)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else if(n==m)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
