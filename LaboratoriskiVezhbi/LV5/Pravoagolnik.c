#include <stdio.h>

int main() {
    int x1, x2, y1, y2, a1, a2, b1, b2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    if ((a1 >= x1 && a1 <= x2) && (a2 >= y1 && a2 <= y2)) {
        printf("DA\n");
    } else {
        printf("NE\n");
    }
    if ((b1 >= x1 && b1 <= x2) && (b2 >= y1 && b2 <= y2)) {
        printf("DA\n");
    } else {
        printf("NE\n");
    }
    return 0;
}
