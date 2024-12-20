#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int count=0;

    while(1)
    {
        n--;
        m--;
        count++;
        if(n==0 || m==0)
            break;
    }
    //if the count is even, the last turn will be Malvika's turn
    if(count%2==0)
        cout<< "Malvika";
    else
        cout<< "Akshat";
    return 0;
}
