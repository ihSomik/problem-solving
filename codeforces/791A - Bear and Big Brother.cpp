#include <iostream>

using namespace std;

int main()
{
    int a, b, i;
    cin>>a >>b;

    if (a>b)
    {
        i=0;
    }
    else
    {
        for (i=1; ; i++)
        {
        a*=3;
        b*=2;
        if (a>b)
            break;
        }
    }

    cout<<i;

    return 0;
}

