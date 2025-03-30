//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, position;
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
    while (scanf("%d", &n)) {
        int tmp = n;
        position = 0;
        int maxPos = 0;
        int maxDigit = 0;
        while (tmp > 0) {
            if (tmp % 10 > maxDigit) {
                maxDigit = tmp % 10;
                maxPos = position;
            }
            tmp /= 10;
            position++;
        }
        if (maxPos == 0) {
            counter1++;
        } else if (maxPos == 1) {
            counter2++;
        } else if (maxPos == 2) {
            counter3++;
        } else if (maxPos == 3) {
            counter4++;
        } else if (maxPos == 4) {
            counter5++;
        }
    }
    printf("0: %d\n", counter1);
    printf("1: %d\n", counter2);
    printf("2: %d\n", counter3);
    printf("3: %d\n", counter4);
    printf("4: %d\n", counter5);
    return 0;
}
