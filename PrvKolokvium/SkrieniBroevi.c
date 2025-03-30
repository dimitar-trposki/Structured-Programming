//
// Created by DimitarT on 8/14/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char c;
    int digit, sum = 0, num = 0;
    while (scanf("%c", &c)) {
        if (c == '!') {
            break;
        }
        if (isdigit(c)) {
            num = num * 10 + atoi(&c);
        } else {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    printf("%d", sum);
    return 0;
}
