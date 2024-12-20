#include <iostream>
using namespace std;

int main()
{
    int w, h, x, y, r;
    cin>>w>>h>>x>>y>>r;
    if(x+r>w || y+r>h || x-r<0 || y-r<0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}
