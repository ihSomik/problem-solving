#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int rem=n%10;
    if(rem>5)
        n=n+(10-rem);
    else
        n=n-rem;
    cout<<n<<endl;
    return 0;
}
