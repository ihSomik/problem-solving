#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	string s;
	cin>>s;

	int d(0), u(0), l(0), sp(0);
	for(int i=0; i<n; i++)
    {
		if(isdigit(s[i]))
			d=1;
		else if(islower(s[i]))
			l=1;
		else if(isupper(s[i]))
			u=1;
		else
			sp=1;
	}

	cout<<max(4-d-l-u-sp,6-n)<<endl;
    return 0;
}
