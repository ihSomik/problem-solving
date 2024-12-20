#include <iostream>
using namespace std;

int check_min_moves(int n)
{
    int moves=0;

    while(n>1)
    {
        if(n%3!=0)
            return -1;
        else if(n%6==0)
            n/=6;
        else
            n*=2;
        moves++;
    }

    return moves;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<< check_min_moves(n) <<endl;
    }

    return 0;
}

