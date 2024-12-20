#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int level=0;
    int m=0;

    for(int i=1; m<n; i++)
    {
        m=(i*(i+1))/2;      // m is the number of cubes in i-th level
        if(m>n)
            break;
        n-=m;
        level++;
    }
    cout<<level<<endl;
    return 0;
}
