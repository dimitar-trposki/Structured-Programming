//
// Created by DimitarT on 8/27/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int maxDigit(int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 10 > maxDigit(n / 10)) {
        return n % 10;
    }
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        printf("%d\n", maxDigit(n));
    }
    return 0;
}
