//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int sum_pos(int *array, int n, int ind) {
    int sum = 0;
    if (ind > n) {
        return 0;
    }
    for (int i = ind; i < n; ++i) {
        sum += *(array + i);
    }
    return sum;
}

int main() {
    int n, ind;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    scanf("%d", &ind);
    printf("%d", sum_pos(array, n, ind));
    return 0;
}
