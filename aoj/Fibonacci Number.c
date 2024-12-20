#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num1 = 0;
    int num2 = 1;
    int next_num;

    for (int i = 1; i <= n; i++) {
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
    }
    printf("%d\n", next_num);
    return 0;
}
