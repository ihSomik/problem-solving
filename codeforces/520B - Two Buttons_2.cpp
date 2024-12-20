// Wrong answer on test 7
#include <iostream>
using namespace std;

int main()
{
    int n, m, count=0;
    cin>>n>>m;

    while(n!=m)
    {
        if(n<m)
        {
            if(n>m/2 && m%2==0)
            {
                n--;
                count++;
            }
            else
            {
                n*=2;
                count++;
            }
        }
        else if(n>m)
        {
            n--;
            count++;
        }
    }

    cout<<count;
    return 0;
}
