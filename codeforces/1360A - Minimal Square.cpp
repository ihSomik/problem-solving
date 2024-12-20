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

        if(a>b)
            swap(a,b);

        int x=max(2*a,b);   // here "a"  is less than "b"
        cout<< x*x <<endl;
    }

    return 0;
}
