#include <iostream>

using namespace std;

string a, b;

int main() {
    cin >> a >> b;
    for (int i=0; i<a.size(); i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }

    if (a<b)
    {
        cout<< -1;
    }
    else if (a>b)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
