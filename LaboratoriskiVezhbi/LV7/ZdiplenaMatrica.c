#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int auxilaryMatrix[100][100];
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("GRESKA");
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            auxilaryMatrix[i][j] = matrix[i][j] + matrix[i][n - j - 1];
        }
    }
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            auxilaryMatrix[i][j] += auxilaryMatrix[n - i - 1][j];
            printf("%d ", auxilaryMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
