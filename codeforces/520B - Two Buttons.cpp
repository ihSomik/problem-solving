#include <iostream>
using namespace std;

int main()
{
    int n, m, count=0;
    cin>>n>>m;
    // reverse thinking: the process to get the number n from m
    while(n!=m)
    {
        if(m>n)
        {
            if(m%2==0)
            {
                m/=2;
                count++;
            }
            else
            {
                m++;
                count++;
            }
        }
        else if(m<n)
        {
            m++;
            count++;
        }
    }

    cout<<count;
    return 0;
}
