//
// Created by DimitarT on 8/22/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    writeToFile();
    FILE *f = fopen("text.txt", "r");
    char current;
    char previous = ' ';
    int counter = 0;
    while ((current = fgetc(f)) != EOF) {
        if (isalpha(current)) {
            if (isVowel(tolower(current)) && isVowel(tolower(previous))) {
                printf("%c%c\n", tolower(previous), tolower(current));
                counter++;
            }
        }
        previous = current;
    }
    printf("%d", counter);
    fclose(f);
    return 0;
}
