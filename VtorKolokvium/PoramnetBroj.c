#include <stdio.h>

int poramnet(int n) {
    int cifra = n % 10;
    if (n == 0) {
        return 0;
    }
    if (cifra == 9) {
        cifra = 7;
    }
    return cifra + 10 * poramnet(n / 10);
}

void sort(int *a, int n) {
    int i, j, pom;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                pom = a[i];
                a[i] = a[j];
                a[j] = pom;
            }
        }
    }
}

int main() {
    int number, array[100], i = 0, j = 0;
    while (scanf("%d", &number)) {
        array[i] = poramnet(number);
        i++;
    }
    sort(array, i);
    if (i > 5)
        i = 5;

    for (j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }
    return 0;
}
