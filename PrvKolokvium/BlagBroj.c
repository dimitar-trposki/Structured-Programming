//
// Created by DimitarT on 8/12/2023.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, tmp, bB;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i) {
        tmp = i;
        bB = 1;
        while (tmp > 0) {
            if ((tmp % 10) % 2 != 0) {
                bB = 0;
            }
            tmp /= 10;
        }
        if (bB == 1) {
            printf("%d", i);
            return 0;
        }
    }
    if (!bB) {
        printf("NE");
    }
    return 0;
}
