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
        int a[n];
        int one=0, zero=0;
        /*
        one- number of a[i]%2 == 1 != i%2
        zero- number of a[i]%2 ==0 != i%2
        */
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(i%2 != a[i]%2)
            {
                if(a[i]%2==1)
                    one++;
                else
                    zero++;
            }
        }

        if(one==zero)
            cout<<one<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
