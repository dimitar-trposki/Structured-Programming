//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int n, m;
    int counterRow = 0, counterColumn = 0;
    int matrix[100][100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1 && matrix[i][j + 2] == 1) {
                counterRow++;
                break;
            }
        }
    }
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1 && matrix[i + 2][j] == 1) {
                counterColumn++;
                break;
            }
        }
    }
    printf("%d", counterColumn + counterRow);
    return 0;
}
