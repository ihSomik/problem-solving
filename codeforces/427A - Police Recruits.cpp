#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pol=0, crm=0;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        if(x>0)
            pol+=x;
        else
        {
            if(pol>0)
                pol--;
            else
                crm++;
        }
    }

    cout<<crm;
    return 0;
}
