#include <stdio.h>

void printN(int n) {
    if (n == 0) {
        return;
    }
    printN(n - 1);
    printf("%d ", n);
}

void triagolnik(int n) {
    printN(n);
    printf("\n");
    if (n > 1) {
        triagolnik(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    triagolnik(n);
    return 0;
}
