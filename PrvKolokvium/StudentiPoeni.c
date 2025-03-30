//
// Created by DimitarT on 8/21/2023.
//
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, points, j = 0, k = 0, sum1 = 0, sum2 = 0;
    int array1[500], array2[500];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &points);
        if (points < 50) {
            array1[j++] = points;
            sum1 += points;
        } else {
            array2[k++] = points;
            sum2 += points;
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", (float) sum1 / j);
    for (int i = 0; i < j; ++i) {
        printf("%d ", array1[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", (float) sum2 / k);
    for (int i = 0; i < k; ++i) {
        printf("%d ", array2[i]);
    }
    return 0;
}
