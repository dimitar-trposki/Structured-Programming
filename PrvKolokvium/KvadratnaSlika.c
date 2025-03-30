//
// Created by dimit on 3/31/2025.
//
//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        printf("%%");
        for (int j = 0; j < m - 2; ++j) {
            if (i == 0 || i == m - 1) {
                printf("@");
            } else {
                printf(".");
            }
        }
        printf("%%\n");
    }
    return 0;
}
