//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int n, m;
    int a, b;
    int sumI, sumII, sumIII, sumIV;
    sumI = sumII = sumIII = sumIV = 0;
    int matrix[100][100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d %d", &a, &b);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i < a && j >= b) {
                sumI += matrix[i][j];
            } else if (i < a && j < b) {
                sumII += matrix[i][j];
            } else if (i >= a && j < b) {
                sumIII += matrix[i][j];
            } else if (i >= a && j >= b) {
                sumIV += matrix[i][j];
            }
        }
    }
    printf("%d %d %d %d", sumI, sumII, sumIII, sumIV);
    return 0;
}
