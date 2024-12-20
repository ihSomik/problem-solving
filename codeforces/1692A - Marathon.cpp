#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[4];
        for(int i=0; i<4; i++)
            cin>>a[i];

        int participants_in_front_of_Timur=0;

        for(int i=0; i<4; i++)
        {
            if(a[0]<a[i])
               participants_in_front_of_Timur++;
        }

        cout<<participants_in_front_of_Timur<<endl;
    }

    return 0;
}
