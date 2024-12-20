#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, a, b;
        cin>>x>>y>>a>>b;

        int time=(y-x)/(a+b);   // time=distance/velocity

        if((y-x)%(a+b))
            cout<<-1<<endl;
        else
            cout<<time<<endl;
    }

    return 0;
}
