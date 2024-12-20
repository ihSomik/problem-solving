#include <stdio.h>

int main() {
    int r, c;
    while (scanf("%d %d", &r, &c) == 2) {
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                if ((!(i & 1) && !(j & 1)) || ((i & 1) && (j & 1)))
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
