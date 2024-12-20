// Time limit exceeded on test 1
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int i;
        for(i=1; k>0; i++)
        {
            if(i%n==0)
                continue;
            k--;
        }
        cout<<i-1<<endl;
    }

    return 0;
}
