#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter=0, signal=1;

    for (int i=0; i<s.length(); i++)
    {
        for (int j=i+1; j<s.length(); j++)
        {
            if (s[i]==s[j])
            {
                signal=0;
            }
        }
        if (signal)
        {
            counter++;
        }
        signal=1;

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
