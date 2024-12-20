// Time limit exceeded on test 32
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int m;
    cin>>m;
    int q[m];
    for(int i=0; i<m; i++)
    {
        cin>>q[i];
        int temp(0);
        for(int j=0; j<n; j++)
        {
            temp+=a[j];
            if(temp>=q[i])
            {
                cout<<j+1<<endl;
                break;
            }
        }
    }

    return 0;
}
