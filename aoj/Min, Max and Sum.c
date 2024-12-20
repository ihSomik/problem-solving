#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    long long sum = 0;
    int mx = -1000000, mn = 1000000;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    printf("%d %d %lld\n", mn, mx, sum);

    return 0;
}
