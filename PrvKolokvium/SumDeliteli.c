//
// Created by DimitarT on 8/14/2023.
//
#include <stdio.h>
#include <stdlib.h>

int sumDeliteli(int num) {
    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n, maxDeliteli = 0, maxNum = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        if (maxDeliteli < sumDeliteli(i)) {
            maxDeliteli = sumDeliteli(i);
            maxNum = i;
        }
    }
    printf("%d", maxNum);
    return 0;
}
