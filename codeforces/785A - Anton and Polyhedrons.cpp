#include<iostream>
using namespace std;

int main()
{
    int n, surfaces=0;
    cin>>n;
    string s[n];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];

        if(s[i]=="Tetrahedron")
            surfaces+=4;
        else if(s[i]=="Cube")
            surfaces+=6;
        else if(s[i]=="Octahedron")
            surfaces+=8;
        else if(s[i]=="Dodecahedron")
            surfaces+=12;
        else if(s[i]=="Icosahedron")
            surfaces+=20;
    }

    cout<<surfaces;

    return 0;
}
