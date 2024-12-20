#include<iostream>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
    cout<< ((n/k)&1 ? "YES" : "NO") <<endl;
    return 0;
}
