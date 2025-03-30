#include <stdio.h>

void scale(float *a, int n) {
    float quotinent;
    int max = *(a + 0);
    for (int i = 1; i < n; ++i) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    quotinent = 100.0 / max;
    for (int i = 0; i < n; ++i) {
        *(a + i) *= quotinent;
    }
}

int main() {
    int n;
    float array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%f", &array[i]);
    }
    scale(array, n);
    for (int i = 0; i < n; ++i) {
        printf("%.2f ", array[i]);
    }
    return 0;
}
