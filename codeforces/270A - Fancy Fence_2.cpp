// Wrong answer on test 3
#include <iostream>
using namespace std;

void solve(int a)
{
    for(int n=3; n<INT_MAX; n++)
    {
        /*
            the sum of interior angles of a polygon is (n-2)*180, where n is the number of sides
        */
        float interior_angle=(n-2)*180/n;

        if(interior_angle>a)
        {
            cout<<"NO"<<endl;
            break;
        }

        if(interior_angle==a)
        {
               cout<<"YES"<<endl;
               break;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        solve(a);
    }
    return 0;
}
