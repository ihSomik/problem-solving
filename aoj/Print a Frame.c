#include <stdio.h>

int main() {
    int r, c;
    while (scanf("%d %d", &r, &c) == 2) {
        if (r < 3 || c < 3)
            continue;

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                if (i == 1 || i == r || j == 1 || j == c)
                    printf("#");
                else
                    printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
