#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;

        if(360 % (180-a) == 0)     // draw 6 symmetrical triangles inside a hexagon
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
