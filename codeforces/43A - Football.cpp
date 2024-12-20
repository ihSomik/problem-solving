//Wrong answer on test 30
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string team1, team2;
    int goal1=0, goal2=0;
    int flag=0;

    while(n--)
    {
        if(!flag)
        {
            cin>>team1;
            goal1++;
            flag=1;
        }
        else
        {
            cin>>team2;
            if(team2==team1)
                goal1++;
            else
                goal2++;
        }
    }

    if(goal1>goal2)
        cout<<team1;
    else
        cout<<team2;

    return 0;
}
