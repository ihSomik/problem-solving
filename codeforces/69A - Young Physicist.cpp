#include <iostream>
using namespace std;

int main()
{
    int n, s1=0, s2=0, s3=0;
    cin>>n;
    int A[100][3];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
        s1+=A[i][0];
        s2+=A[i][1];
        s3+=A[i][2];
    }

    if (s1==0 && s2==0 && s3==0)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }

    return 0;
}
