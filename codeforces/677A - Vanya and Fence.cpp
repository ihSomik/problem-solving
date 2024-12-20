#include <iostream>
using namespace std;

int main()
{
    int n, h, a, w=0;
    cin>>n>>h;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a>h)
        {
            w++;
        }
        w++;
    }
    cout<<w;
    return 0;
}
