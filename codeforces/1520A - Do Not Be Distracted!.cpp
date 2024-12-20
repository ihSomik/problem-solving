#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;

        for(int i=0; i<s.size(); i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]!=s[j])
                {
                    for(int k=j+1; k<s.size(); k++)
                    {
                        if(s[i]==s[k])
                            flag=1;     // previous letter detected
                    }
                }
            }
        }

        if(flag)
            cout<< "NO" <<endl;
        else
            cout<< "YES" <<endl;
    }

    return 0;
}
