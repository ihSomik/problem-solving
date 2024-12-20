#include <iostream>

using namespace std;

int main()
{
    int x, moves;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cin>>x;
            if (x==1)
                moves=abs(i-3) + abs(j-3);
        }
    }
    cout<<moves<<endl;
    return 0;
}
