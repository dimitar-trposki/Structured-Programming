//
// Created by DimitarT on 8/27/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void cleanString(char *string) {
    string[strlen(string) - 1] = '\0';
}

void changeAndPrint(char *string, char z1, char z2) {
    int start = 0, end = 0;
    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] == z1) {
            start = i;
            break;
        }
    }
    for (int i = strlen(string) - 1; i >= 0; --i) {
        if (string[i] == z2) {
            end = i;
            break;
        }
    }
    for (int i = start + 1; i < end; ++i) {
        printf("%c", string[i]);
    }
}

int main() {
    wtf();
    FILE *f = fopen("podatoci.txt", "r");
    char string[81];
    char z1, z2;
    getchar();
    scanf("%c %c", &z1, &z2);
    while ((fgets(string, sizeof(string), f)) != NULL) {
        cleanString(string);
        changeAndPrint(string, z1, z2);
        printf("\n");
    }
    fclose(f);
    return 0;
}
