#include <stdbool.h>
#include <stdio.h>

bool check_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (!(n % 2) || !(n % 3))
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2)))
            return false;
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (check_prime(a[i]))
            count++;
    }

    printf("%d\n", count);
    return 0;
}
