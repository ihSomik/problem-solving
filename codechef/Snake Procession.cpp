#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum_of_HT(0);
        int flag(0);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'H')
                sum_of_HT++;
            else if (s[i] == 'T')
                sum_of_HT--;
            if (sum_of_HT < 0 || sum_of_HT > 1)
                flag = 1;
        }

        if (flag || sum_of_HT != 0)
            cout << "Invalid" << endl;
        else
            cout << "Valid" << endl;
    }

    return 0;
}
