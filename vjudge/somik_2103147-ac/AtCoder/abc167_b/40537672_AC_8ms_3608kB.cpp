#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, k;
    cin>>a>>b>>c>>k;
    if(a>=k)
        cout<<k<<endl;
    else if(a+b>=k)
        cout<<a<<endl;
    else
        cout<<a-(k-(a+b))<<endl;
    return 0;
}
