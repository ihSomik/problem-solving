#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int x, y, z, cz, result=0;
        /*
        ax+by+cz=n
        we have to find out the maximum value of (x+y+z)
        */
    for(x=0; a*x<=n; x++)
    {
        for(y=0; a*x+b*y<=n; y++)
        {
            cz=n-(a*x+b*y);
            if(cz%c==0)    //checking if z is integer or not
            {
                z=cz/c;
                result=max(result,x+y+z);
            }
        }
    }

    cout<<result;
    return 0;
}
