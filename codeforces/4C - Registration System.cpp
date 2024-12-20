#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;

    map<string,int>reg;

    for(int i=0; i<n; i++)
    {
        cin>>s;

        if(reg[s]==0)
        {
            cout<<"OK"<<endl;
            reg[s]=1;
        }

        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }

    return 0;
}
