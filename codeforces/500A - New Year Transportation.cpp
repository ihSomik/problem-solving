// wrong answer on test 4
#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    int a[n-1];

    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]+i==t)
        {
            cout<< "YES";
            return 0;
        }
    }

    cout<< "NO";
    return 0;
}
