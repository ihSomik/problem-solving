#include <iostream>
using namespace std;

int main()
{
    int n, countA=0, countB=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='A')
            countA++;
        else
            countB++;
    }

    if (countA==countB)
        cout<< "Friendship";
    else if (countA>countB)
        cout<< "Anton";
    else
        cout<< "Danik";

    return 0;
}
