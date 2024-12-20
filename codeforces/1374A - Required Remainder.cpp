#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, n;
        cin>>x>>y>>n;

        if(n%x>=y)  // for example, 5 1 13
            cout<<n-n%x+y<<endl;
        else        // for example, 5 4 13
            cout<<n-n%x-x+y<<endl;
    }

    return 0;
}
