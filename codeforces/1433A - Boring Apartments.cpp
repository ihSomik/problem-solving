#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int digits=(n%10-1)*10;

        for(int i=1; n>0; i++)
        {
            n=n/10;
            digits+=i;
        }

        cout<<digits<<endl;
    }

    return 0;
}
