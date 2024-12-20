#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int n;
    cin>>n;

    while(n--)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)
            count++;
        else if(m<c)
            count--;
    }

    if(count>0)
        cout<< "Mishka";
    else if(count<0)
        cout<< "Chris";
    else
        cout<< "Friendship is magic!^^";
    return 0;
}
