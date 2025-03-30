//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int m, n, k = 0;
    int matrix[100][100];
    int array[100];
    int sum = 0;
    float middle = 0;
    int neededNumber;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        middle = (float) sum / n;
        float diff = fabs(middle - matrix[i][0]);
        neededNumber = matrix[i][0];
        for (int j = 0; j < n; ++j) {
            if (fabs(middle - matrix[i][j]) > diff) {
                neededNumber = matrix[i][j];
                diff = fabs(middle - matrix[i][j]);
            }
        }
        array[k++] = neededNumber;
        sum = 0;
    }
    for (int i = 0; i < k; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
