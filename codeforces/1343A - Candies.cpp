#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int sum_of_series;
        /*
            {1+2+4+8+...+2^(k-1)}*x=n
            summation of {1+2+4+8+...+2^(k-1)}= 2^k - 1
        */
        for(int k=2; ; k++)
        {
            sum_of_series= pow(2,k)-1;
            if(n % sum_of_series == 0)
            {
                cout<< n / sum_of_series <<endl;
                break;
            }
        }
    }

    return 0;
}
