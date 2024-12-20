#include <bits/stdc++.h>
using namespace std;

// finding the median from the count array
double findMedian(vector<int>& count, int d) {
    int prefixSum = 0;  // number of elements we've seen so far
    int med1 = -1, med2 = -1;

    int firstMedPosition = (d + 1) / 2;
    int secMedPosition = (d / 2 + 1);

    for (int i = 0; i < count.size(); i++) {
        prefixSum += count[i];

        if (med1 == -1 && prefixSum >= firstMedPosition) med1 = i;  // passed the (d + 1) / 2-th element

        if (med2 == -1 && prefixSum >= secMedPosition) {
            med2 = i;  // passed the (d / 2 + 1)-th element
            break;
        }
    }

    if (d & 1)
        return med1;
    else
        return (med1 + med2) / 2.0;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> e(n);
    for (int i = 0; i < n; i++) cin >> e[i];

    vector<int> count(201, 0);
    for (int i = 0; i < d; i++) count[e[i]]++;

    int notification(0);
    for (int i = d; i < n; i++) {
        double median = findMedian(count, d);

        if (e[i] >= 2 * median) notification++;

        count[e[i - d]]--;
        count[e[i]]++;
    }

    cout << notification << endl;
}
