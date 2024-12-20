#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;
    cin>>a>>b>>c;

    x=a+b+c;
    x=max(x, a*b*c);
    x=max(x, a*(b+c));
    x=max(x, (a*b)+c);
    x=max(x, a+(b*c));
    x=max(x, (a+b)*c);

    cout<<x;
    return 0;
}
