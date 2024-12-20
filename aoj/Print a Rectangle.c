#include <stdio.h>

int main() {
    while (1) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x == 0 || y == 0)
            break;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
