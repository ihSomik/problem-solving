#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, s1, s;
    cin>>a>>b>>s;

    s1=a+b;

    sort(s1.begin(),s1.end());
    sort(s.begin(),s.end());

    if(s1==s)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
