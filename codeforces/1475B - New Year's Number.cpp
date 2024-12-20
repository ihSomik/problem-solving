#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int n;
        cin>>n;

        for(int x=0; 2020*x<=n; x++)
        {
            if(flag)
                break;

            for(int y=0; 2020*x+2021*y<=n; y++)
            {
                if(2020*x+2021*y==n)
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag)
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }

    return 0;
}
