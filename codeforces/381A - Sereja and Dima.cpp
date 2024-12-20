#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int ser=0, dim=0;
    int left=0, right=n-1;
    int turn=1;

    while(n--)
    {
        if(turn%2!=0)
        {
            if(a[left]>a[right])
            {
                ser+=a[left];
                left++;
            }
            else
            {
                ser+=a[right];
                right--;
            }
        }
        else
        {
            if(a[left]>a[right])
            {
                dim+=a[left];
                left++;
            }
            else
            {
                dim+=a[right];
                right--;
            }
        }
        turn++;
    }

    cout<<ser<<" "<<dim;
    return 0;
}

