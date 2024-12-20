#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char start='a';
    int rotations=0;

    for(int i=0; i<s.size(); i++)
    {
        int rotation1=abs(s[i]-start);
        int rotation2=26-rotation1;
        rotations+=min(rotation1,rotation2);
        start=s[i];
    }
    cout<<rotations<<endl;
    return 0;
}
