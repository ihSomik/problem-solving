#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int>pr[n];
    for(int i=0; i<n; i++)
        cin>>pr[i].first>>pr[i].second;

    sort(pr,pr+n);
    for(int i=0; i<n-1; i++)
    {
        if(pr[i].first<pr[i+1].first && pr[i].second>pr[i+1].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
