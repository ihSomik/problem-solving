#include<iostream>
using namespace std;

int main()
{
    int n, flag(0);
    cin>>n;
    int opinions[n];
    
    while(n--)
    {
        cin>>opinions[n];
        if(opinions[n]==1)
            flag=1;
    }

    if(flag)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}
