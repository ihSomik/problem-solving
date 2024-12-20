#include <stdio.h>

int main() {
    int x, y, r, w, h;
    scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
    if (x + r > w || y + r > h || x - r < 0 || y - r < 0)
        printf("No\n");
    else
        printf("Yes\n");
}
