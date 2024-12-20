#include <bits/stdc++.h>
using namespace std;

int bestDiv = 1, maxSum = 1;

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void checkBestDiv(int divisor) {
    int digSum = digitSum(divisor);

    if (digSum > maxSum || (digSum == maxSum && divisor < bestDiv)) {
        bestDiv = divisor;
        maxSum = digSum;
    }
}

int main() {
    int n;
    cin >> n;
    int sq = sqrt(n);

    for (int i = 1; i <= sq; i++) {
        if (n % i == 0) {
            checkBestDiv(i);
            checkBestDiv(n / i);
        }
    }

    cout << bestDiv << endl;
}
