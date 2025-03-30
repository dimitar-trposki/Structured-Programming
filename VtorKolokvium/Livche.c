//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *f = fopen("livce.txt", "r");
    int vlog, tip, tip1;
    char string[10], tmp[10];
    double koef;
    double maxKoef = 0;
    double dobivka = 1;
    fscanf(f, "%d", &vlog);
    while (fscanf(f, "%s", string) != EOF) {
        fscanf(f, "%d %lf", &tip, &koef);
        dobivka *= koef;
        if (koef > maxKoef) {
            maxKoef = koef;
            strcpy(tmp, string);
            tip1 = tip;
        }
    }
    printf("%s %d %.2lf\n", tmp, tip1, maxKoef);
    printf("%.2lf", dobivka * vlog);
    fclose(f);
    return 0;
}
