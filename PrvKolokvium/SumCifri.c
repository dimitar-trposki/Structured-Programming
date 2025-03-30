//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {
    int number;
    int maxDigit, prevMaxDigit = 0;
    while (scanf("%d", &number)) {
        int tmp = number;
        int sum = 0;
        maxDigit = 0;
        while (tmp > 0) {
            sum += tmp % 10;
            if (maxDigit < tmp % 10) {
                maxDigit = tmp % 10;
            }
            tmp /= 10;
        }
        printf("%d: %d\n", number, sum + prevMaxDigit);
        prevMaxDigit = maxDigit;
    }
    return 0;
}
