#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin>>n;
    int sum=0;
    while(n--)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}
