//
// Created by DimitarT on 8/27/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

double sum(int array[], int n, int counter) {
    if (counter == n - 1) {
        return array[n - 1];
    }
    return array[counter] + 1.0 / sum(array, n, counter + 1);
}

int main() {
    int n;
    int array[100], counter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%lf", sum(array, n, counter));
    return 0;
}
