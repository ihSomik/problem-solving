#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int counter=0;
    string s;
    cin>>s;

    sort(s.begin(), s.end());

    for (int i=0; i<s.length(); i++)
    {
        if (s[i]!=s[i+1])
        {
            counter++;
        }
    }

    if(counter%2==0)
    {
        cout<<"CHAT WITH HER!" <<endl;
    }
    else
    {
        cout<<"IGNORE HIM!" <<endl;
    }

    return 0;
}
