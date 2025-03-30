#include <stdio.h>

int main() {
    int m, n;
    float max, min;
    double matrix[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%lf", &matrix[i][j]);
        }
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (i == 0) {
                max = min = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        for (int i = 0; i < m; ++i) {
            matrix[i][j] = (matrix[i][j] - min) / (max - min);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
