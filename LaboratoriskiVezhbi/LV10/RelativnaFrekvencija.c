#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    char c;
    scanf("%c", &c);

    FILE *file = fopen("text.txt", "r");

    char curr;
    int total = 0, count = 0;

    while ((curr = fgetc(file)) != EOF) {
        if (isalpha(curr)) {
            total++;
            if (tolower(curr) == tolower(c)) {
                ++count;
            }
        }
    }
    //printf("%d %d\n", upper,lower);
    printf("%.4f", (float) count / total);
}
