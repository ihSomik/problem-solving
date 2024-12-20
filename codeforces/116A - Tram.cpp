#include <iostream>
using namespace std;

int main()
{
    int n, out, in, capacity=0, passenger=0;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>out>>in;
        passenger-=out;
        passenger+=in;
        if (passenger>capacity)
            capacity=passenger;
    }
    cout<<capacity;
    return 0;
}
