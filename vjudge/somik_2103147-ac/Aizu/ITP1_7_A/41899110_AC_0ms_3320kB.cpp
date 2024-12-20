#include <iostream>
using namespace std;

int main()
{
    int m, f, r;
    while (cin >> m >> f >> r)
    {
        if (m == -1 && f == -1 && r == -1)
            break;
        else if (m == -1 || f == -1)
            cout << "F" << endl;
        else
        {
            switch (m + f)
            {
            case 80 ... 1000:
                cout << "A" << endl;
                break;
            case 65 ... 79:
                cout << "B" << endl;
                break;
            case 50 ... 64:
                cout << "C" << endl;
                break;
            case 30 ... 49:
                if (r >= 50)
                    cout << "C" << endl;
                else
                    cout << "D" << endl;
                break;
            default:
                cout << "F" << endl;
            }
        }
    }
}
