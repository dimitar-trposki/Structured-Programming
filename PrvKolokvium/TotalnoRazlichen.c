//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int totalnoRazlichen(int a, int b) {
    int flag = 1;
    while (b > 0) {
        int tmp = a;
        while (tmp > 0) {
            if (tmp % 10 == b % 10) {
                flag = 0;
                break;
            }
            tmp /= 10;
        }
        b /= 10;
    }
    if (flag) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = n - 1; i >= 0; --i) {
        if (totalnoRazlichen(i, x)) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
