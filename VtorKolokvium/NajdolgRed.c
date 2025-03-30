//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void cleanString(char *string) {
    string[strlen(string) - 1] = '\0';
}

int numOfNumbers(char *string) {
    int counter = 0;
    for (int i = 0; i < strlen(string) - 1; ++i) {
        if (isdigit(string[i])) {
            counter++;
        }
    }
    if (counter >= 2) {
        return 1;
    }
    return 0;
}

void changeAndPrintRow(char *string) {
    int start = 0, end = 0;
    for (int i = 0; i < strlen(string) - 1; ++i) {
        if (isdigit(string[i])) {
            start = i;
            break;
        }
    }
    for (int i = strlen(string); i > 0; --i) {
        if (isdigit(string[i])) {
            end = i;
            break;
        }
    }
    for (int i = start; i <= end; ++i) {
        printf("%c", string[i]);
    }
}

int main() {
    wtf();
    FILE *f = fopen("dat.txt", "r");
    char row[101];
    int maxLength = 0;
    char tmp[101];
    while (fgets(row, sizeof(row), f) != NULL) {
        cleanString(row);
        if (numOfNumbers(row)) {
            int length = strlen(row);
            if (length >= maxLength) {
                maxLength = length;
                strcpy(tmp, row);
            }
        }
    }
    changeAndPrintRow(tmp);
    fclose(f);
    return 0;
}
