#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        int x,y;
    cin>>x>>y;
    if(x==0 || y==0)
        break;
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}
