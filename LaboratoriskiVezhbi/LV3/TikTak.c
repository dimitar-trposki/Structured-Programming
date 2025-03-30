#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N % 3 == 0 && N % 5 == 0) {
        printf("Tik - Tak");
        return 0;
    } else if (N % 3 == 0) {
        printf("Tik");
        return 0;
    } else if (N % 5 == 0) {
        printf("Tak");
        return 0;
    } else
        printf("Losh Broj");
    return 0;
}
