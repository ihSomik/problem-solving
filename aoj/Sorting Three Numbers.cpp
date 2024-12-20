#include <iostream>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << a[i];
        if (i != 2)
            cout << " ";
    }
    cout << endl;
}