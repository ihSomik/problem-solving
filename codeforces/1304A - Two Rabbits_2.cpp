// Time limit exceeded on test 3
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
        for(int i=1; i<=INT_MAX; i++)
        {
            x+=a;
            y-=b;
            if(x>y)
            {
                cout<<-1<<endl;
                break;
            }
            if(x==y)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
