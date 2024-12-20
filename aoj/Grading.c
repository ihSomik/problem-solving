#include <stdio.h>

int main() {
    int m, f, r;
    while (scanf("%d %d %d", &m, &f, &r) == 3) {
        if (m == -1 && f == -1 && r == -1)
            break;
        else if (m == -1 || f == -1)
            printf("F\n");
        else {
            int sum = m + f;
            if (sum >= 80)
                printf("A\n");
            else if (sum >= 65)
                printf("B\n");
            else if (sum >= 50)
                printf("C\n");
            else if (sum >= 30) {
                if (r >= 50)
                    printf("C\n");
                else
                    printf("D\n");
            } else
                printf("F\n");
        }
    }
    return 0;
}
