#include <iostream>
using namespace std;

int main()
{
    int count=0;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(count==6)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            count=0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
