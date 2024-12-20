#include<iostream>
using namespace std;

int main()
{
    int n, goal=0;
    cin>>n;
    string team1, team2;

    while(n--)
    {
        if(goal==0)
        {
            cin>>team1;
            goal=1;
        }
        else
        {
            cin>>team2;
            if(team2==team1)
                goal++;
            else
                goal--;
        }
    }

    cout<<team1<<endl;
    return 0;
}
