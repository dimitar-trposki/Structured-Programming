//
// Created by DimitarT on 8/27/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void cleanString(char *string) {
    string[strlen(string) - 1] = '\0';
}

int countDigits(char *string) {
    int counter = 0;
    for (int i = 0; i < strlen(string); ++i) {
        if (isdigit(string[i])) {
            counter++;
        }
    }
    return counter;
}

void bubbleSort(char array[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (array[j] > array[j + 1]) {
                char tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main() {
    wtf();
    FILE *f = fopen("input.txt", "r");
    char string[100];
    char array[80];
    while (fgets(string, sizeof(string), f) != NULL) {
        cleanString(string);
        int j = 0;
        for (int i = 0; i < strlen(string); ++i) {
            if (isdigit(string[i])) {
                array[j++] = string[i];
            }
        }
        bubbleSort(array, j);
        printf("%d:", countDigits(string));
        for (int i = 0; i < j; ++i) {
            printf("%c", array[i]);
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
