#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num1=0;
    int num2=1;
    int next_num;

    for(int i=1; i<=n; i++)
    {
        next_num=num1+num2;
        num1=num2;
        num2=next_num;
    }
    cout<<next_num<<endl;
    return 0;
}
