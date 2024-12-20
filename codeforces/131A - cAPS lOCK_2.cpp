#include<iostream>
using namespace std;

int main()
{
    bool l=false;
    string s;
    cin>>s;

    for(int i=1; i<s.size(); i++)
    {
        if(islower(s[i]))   // checking if a single letter lower
            l=true;
    }

    if(l==false)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(islower(s[i]))
                s[i]=toupper(s[i]);
            else
                s[i]=tolower(s[i]);
        }
        cout<<s;
        return 0;
    }

    else
    {
        cout<<s;
        return 0;
    }
}
