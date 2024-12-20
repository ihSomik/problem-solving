#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    char a[n*m];
    int flag=0;

    for(int i=0; i<m*n; i++)
    {
        cin>>a[i];
        if(a[i]=='C' || a[i]=='M' || a[i]=='Y')
            flag=1;
    }

    if(flag)
        cout<<"#Color";
    else
        cout<<"#Black&White";
    return 0;
}
