#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if (s.size()==1)
    {
        cout<<s;
        return 0;
    }

    for(int i=0; i<s.size()-2; i+=2)
    {
        for(int j=i+2; j<s.size(); j+=2)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }

    cout<<s;
    return 0;
}
