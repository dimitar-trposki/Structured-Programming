//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int najznahcajnaCifra(int n) {
    if (n < 10) {
        return n;
    }
    return najznahcajnaCifra(n / 10);
}

int main() {
    wtf();
    FILE *f = fopen("broevi.txt", "r");
    int n, number;
    while (fscanf(f, "%d", &n)) {
        if (n == 0) {
            break;
        }
        int maxCifra = 0, maxNum = 0;
        for (int i = 0; i < n; ++i) {
            fscanf(f, "%d", &number);
            if (najznahcajnaCifra(number) > maxCifra) {
                maxCifra = najznahcajnaCifra(number);
                maxNum = number;
            }
        }
        printf("%d\n", maxNum);
    }
    fclose(f);
    return 0;
}
