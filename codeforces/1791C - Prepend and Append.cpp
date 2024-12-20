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

        for(int i=0, j=n-1; i<j; i++, j--)
        {
            if(s[i] != s[j])
                n-=2;
            else
                break;
        }
        cout<<n<<endl;
    }
    return 0;
}
