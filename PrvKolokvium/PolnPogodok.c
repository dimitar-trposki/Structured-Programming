//
// Created by DimitarT on 8/21/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {
    char c;
    int sum = 0;
    while (scanf("%c", &c)) {
        if (c == '.') {
            break;
        }
        if (c >= '0' && c <= '9') {
            sum += c - '0';
        } else if (c == 'a' || c == 'A') {
            sum += 10;
        } else if (c == 'b' || c == 'B') {
            sum += 11;
        } else if (c == 'c' || c == 'C') {
            sum += 12;
        } else if (c == 'd' || c == 'D') {
            sum += 13;
        } else if (c == 'e' || c == 'E') {
            sum += 14;
        } else if (c == 'f' || c == 'F') {
            sum += 15;
        }
    }
    if (sum % 16 == 0 && (sum / 10) % 10 == 1 && sum % 10 == 6) {
        printf("Poln pogodok");
    } else if (sum % 16 == 0) {
        printf("Pogodok");
    } else {
        printf("%d", sum);
    }
    return 0;
}
