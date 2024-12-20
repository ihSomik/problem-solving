#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int x=max(2*min(a,b) , max(a,b));
        cout<< x*x <<endl;
    }

    return 0;
}
