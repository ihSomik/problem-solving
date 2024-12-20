#include <bits/stdc++.h>
using namespace std;

int main() {
    string time;
    cin >> time;

    int hours = stoi(time.substr(0, 2));
    string period = time.substr(8, 2);

    if (period == "PM" && hours != 12) hours += 12;

    if (period == "AM" && hours == 12) hours = 0;

    time[0] = (hours / 10) + '0';
    time[1] = (hours % 10) + '0';

    time.resize(8);

    cout << time << endl;
}
