#include <stdio.h>

int a, b, c, n;

int S(int n) {
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    else
        return S(n - 1) + S(n - 2) + S(n - 3);
}

int main() {
    scanf("%d %d %d %d", &n, &a, &b, &c);
    printf("%d\n", S(n));
}
