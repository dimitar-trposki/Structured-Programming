//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    int n, j = 0, k = 0, l = 0;
    int array[1000], tmp1[350], tmp2[350], tmp3[350];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
        if (array[i] % 10 == 0 || array[i] % 10 == 1 || array[i] % 10 == 2) {
            tmp1[j] = array[i];
            j++;
        } else if (array[i] % 10 == 3 || array[i] % 10 == 4 || array[i] % 10 == 5) {
            tmp2[k] = array[i];
            k++;
        } else if (array[i] % 10 == 6 || array[i] % 10 == 7 || array[i] % 10 == 8 || array[i] % 10 == 9) {
            tmp3[l] = array[i];
            l++;
        }
    }
    printf("Grupa 1\n");
    for (int i = 0; i < j; ++i) {
        printf("%d ", tmp1[i]);
    }
    printf("\nGrupa 2\n");
    for (int i = 0; i < k; ++i) {
        printf("%d ", tmp2[i]);
    }
    printf("\nGrupa 3\n");
    for (int i = 0; i < l; ++i) {
        printf("%d ", tmp3[i]);
    }
    return 0;
}
