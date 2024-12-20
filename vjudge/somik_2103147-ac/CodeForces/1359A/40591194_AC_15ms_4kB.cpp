#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, k;
		cin>>n>>m>>k;
        /*
            n/k is the number of cards got each player
            x  is the number of jokers in the winner's hand
            y is the maximum number of jokers among all other players
        */
        int x=min(m,(n/k));
		int left_jokers=m-x;
		int y=ceil((double)left_jokers/(k-1));

		cout<<x-y<<endl;
    }
    return 0;
}
