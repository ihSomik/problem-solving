#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int books(0), spent_time(0), j(0);
    for(int i=0; i<n; i++)
    {
        spent_time+=a[i];
        if(spent_time<=t)
            books++;
        else
        {
            spent_time-=a[j];
            j++;
        }
    }

    cout<<books<<endl;
    return 0;
}
