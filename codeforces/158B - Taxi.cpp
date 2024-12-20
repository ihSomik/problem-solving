#include<iostream>
using namespace std;

int main()
{
    int n;                          // n is number of group
    cin>>n;
    int s[n];                       // s[i] is the number of children in the i-th group
    int g1=0, g2=0, g3=0, g4=0;     // g2 is the number of group consisting of 2 children
    int taxi=0;                     // the minimum number of taxis
    for(int i=0; i<n; i++)
    {
        cin>>s[i];

        if(s[i]==1)
            g1++;
        if(s[i]==2)
            g2++;
        if(s[i]==3)
            g3++;
        if(s[i]==4)
            g4++;
    }

    taxi+=g4;

    while(g1!=0 && g3!=0)
    {
        taxi++;
        g1--;
        g3--;
        // a group of 1 student and a group of 3 students require a single taxi
    }

    if(g1==0 && g3!=0)
        taxi+=g3;       // a group of 3 students needs another single taxi when there is no group of 1 student

    taxi+=g2/2;        // we need 1 taxi for every 2 groups of 2 students

    if(g2%2==1)        // if there is another group of 2 students left, the group will join with the single students
    {
        taxi++;
        g2=0;
        g1-=2;
    }

    if(g1>0)
    {
        if(g1%4==0)
            taxi+=g1/4;     // we need a taxi for every 4 students
        else
            taxi+=g1/4+1;
    }

    cout<<taxi;
    return 0;
}
