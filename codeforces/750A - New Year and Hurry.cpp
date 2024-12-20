#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int rest_time=240-k;
    int req_time=0;
    int count=0;

    for(int i=1; count!=n ; i++)
    {
        req_time+=5*i;
        if(req_time>rest_time)
            break;
        count++;
    }

    cout<<count;
    return 0;
}
