//
// Created by DimitarT on 8/27/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int brojPozitivni(int a[], int n) {
    if (n == -1) {
        return 0;
    }
    if (a[n] > 0) {
        return 1 + brojPozitivni(a, n - 1);
    }
    return 0 + brojPozitivni(a, n - 1);
}

int main() {
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%d", brojPozitivni(array, n - 1));
    return 0;
}
