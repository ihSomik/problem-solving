#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        long a, b, count=0;
        cin>>a>>b;

        while(a%b!=0)
        {
            a++;
            count++;
        }

        cout<<count<<endl;
    }
}
