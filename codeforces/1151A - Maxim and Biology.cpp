#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    int min_operations=INT_MAX;
    for(int i=0; i<=n-4; i++)
    {
        int operations_for_A=abs((int)'A'-(int)s[i]);
        operations_for_A=min(operations_for_A,26-operations_for_A);

        int operations_for_C=abs((int)'C'-(int)s[i+1]);
        operations_for_C=min(operations_for_C,26-operations_for_C);

        int operations_for_T=abs((int)'T'-(int)s[i+2]);
        operations_for_T=min(operations_for_T,26-operations_for_T);

        int operations_for_G=abs((int)'G'-(int)s[i+3]);
        operations_for_G=min(operations_for_G,26-operations_for_G);

        int temp_operations=operations_for_A+operations_for_C+operations_for_T+operations_for_G;

        min_operations=min(min_operations , temp_operations);
    }

    cout<<min_operations<<endl;
    return 0;
}

