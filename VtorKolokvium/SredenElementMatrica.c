//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int m, n, matrix[100][100];
    int sumI, sumII;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        sumI = sumII = 0;
        if (n % 2 == 0) {
            for (int j = 0; j < n / 2; ++j) {
                sumI += matrix[i][j];
            }
            for (int j = n / 2; j < n; ++j) {
                sumII += matrix[i][j];
            }
            int diff = fabs(sumI - sumII);
            matrix[i][n / 2 - 1] = matrix[i][n / 2] = diff;
        } else if (n % 2 != 0) {
            for (int j = 0; j <= n / 2; ++j) {
                sumI += matrix[i][j];
            }
            for (int j = n / 2; j < n; ++j) {
                sumII += matrix[i][j];
            }
            int diff = fabs(sumI - sumII);
            matrix[i][n / 2] = diff;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
