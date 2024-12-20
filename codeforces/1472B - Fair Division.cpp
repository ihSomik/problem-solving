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
        int candy1gram=0, candy2grams=0;
        int total_weight=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]==1)
                candy1gram++;
            else
                candy2grams++;

            total_weight+=a[i];
        }

        if(total_weight%2!=0 || candy2grams%2!=0 && candy1gram==0)
            cout<< "NO" <<endl;
        else
            cout<< "YES" <<endl;
    }

    return 0;
}
