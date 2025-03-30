//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

void parenEkvivalenten(int a, int b) {
    int position = 1;
    int flag = 0;
    while (a > 0) {
        if (position % 2 == 0) {
            if (a % 10 == b % 10) {
                flag = 1;
                b /= 10;
            } else {
                flag = 0;
            }
        }
        a /= 10;
        position++;
    }
    if (flag) {
        printf("PAREN");
    } else {
        printf("NE");
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Invalid input");
        return 0;
    }
    if (a > b) {
        parenEkvivalenten(a, b);
    } else {
        parenEkvivalenten(b, a);
    }
    return 0;
}
