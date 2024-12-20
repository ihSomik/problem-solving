#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long n, k, ways;
        cin >> n >> k;

        if (k == 1)
            ways = n * n;
        else if (k > n)
            ways = 0;
        else
        {
            ways = 1;
            for (int i = k-1, j = 1; i > 0, j <= k; i--, j++)
            {
                ways *= (n - i) * (n - i) ;
                ways=ways/j;
            }
        }
        cout<<"Case "<<i<<": "<<ways << endl;
    }

    return 0;
}
