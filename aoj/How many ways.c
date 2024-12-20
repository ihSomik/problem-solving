#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int count = 0;
    for (int i = a; i <= b; i++)
        if (!(c % i))
            count++;
    printf("%d", count);
}
#include <stdio.h>

int main() {
    while (1) {
        int n, x;
        scanf("%d %d", &n, &x);
        if (n == 0 && x == 0)
            break;

        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if (i + j + k == x) {
                        count++;
                    }
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
