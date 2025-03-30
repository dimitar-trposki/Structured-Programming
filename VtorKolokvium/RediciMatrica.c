//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int x, m, n;
    int matrix[100][100];
    int sum;
    scanf("%d", &x);
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        for (int j = 0; j < n; ++j) {
            if (sum > x) {
                matrix[i][j] = 1;
            }
            if (sum < x) {
                matrix[i][j] = -1;
            }
            if (sum == x) {
                matrix[i][j] = 0;
            }
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
