#include <iostream>
using namespace std;

int main()
{
    int x, y, r, w, h;
    cin >> w >> h >> x >> y >> r;
    if (x + r > w || y + r > h || x - r < 0 || y - r < 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
