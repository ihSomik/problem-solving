// the code was wrong but accepted. we cannot add number from  string.
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        if(n[0]+n[1]+n[2] == n[3]+n[4]+n[5])
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }

    return 0;
}
