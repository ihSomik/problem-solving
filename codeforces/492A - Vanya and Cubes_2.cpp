#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int level=1;
    int m=0;    // m is the number of cubes in i-th level

    while(m<=n)
    {
        m+=((level+1)*level)/2;
        if(m>n)
        {
            level--;
            break;
        }
        level++;
    }
    cout<<level<<endl;
    return 0;
}
