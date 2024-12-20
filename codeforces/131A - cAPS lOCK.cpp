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


    if(isupper(s[0]) && l==false)   // checking this format "CAPSLOCK"
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
        return 0;
    }


    if(islower(s[0]) && l==false)   // checking this format "cAPSLOCK"
    {
        s[0]=toupper(s[0]);
        for(int i=1; i<s.size(); i++)
        {
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
