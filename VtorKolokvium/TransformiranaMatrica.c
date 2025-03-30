//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int n;
    int matrix[100][100], matrix1[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * 2; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix1[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * 2; ++j) {
            matrix1[i + n][j] = matrix[i][j + n];
        }
    }
    for (int i = 0; i < n * 2; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
