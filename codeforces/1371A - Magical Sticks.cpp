#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        /*
            When n is equal to 4, the lengths of the sticks will be 1,2,3,4 respectively
        */
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<< (n+1)/2 <<endl;
    }

    return 0;
}
