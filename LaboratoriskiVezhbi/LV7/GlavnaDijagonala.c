#include <stdio.h>

int main() {
    int N, matrix[100][100];
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                matrix[i][j] *= (-1);
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
