#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numbers=0;
        long long temp;

        for(int i=1; i<=9; i++)
        {
            temp=i;
            while(temp<=n)
            {
                numbers++;
                temp=temp*10+i;
            }
        }
        cout<<numbers<<endl;
    }
    return 0;
}
