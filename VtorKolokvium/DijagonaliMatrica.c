//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int n;
    float x = 0, y = 0;
    float matrix[100][100], matrix1[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f", &matrix[i][j]);
            if (i > j) {
                x += matrix[i][j];
            }
            if (i + j > n - 1) {
                y += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j && i + j == n - 1) {
                matrix1[i][j] = x + y;
            } else if (i == j) {
                matrix1[i][j] = x;
            } else if (i + j == n - 1) {
                matrix1[i][j] = y;
            } else {
                matrix1[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.1f ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
