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

        int flip(0), move(0);
        for(int i=0; i<n; i++)
        {
            if( s[i]=='(' )
                flip--;
            else
                flip++;
            if(flip>0)
            {
                move++;
                flip=0;
            }
        }
        cout<<move<<endl;
    }
    return 0;
}
