#include <stdio.h>

void sort(int *x, int *y, int *z) {
    int temp = 0;
    if (*y > *x) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*z > *x) {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y < *z) {
        temp = *z;
        *z = *y;
        *y = temp;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}
