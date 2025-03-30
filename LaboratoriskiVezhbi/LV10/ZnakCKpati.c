#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *text) {
    text[strlen(text) - 1] = '\0';
}

int containsChar(char *string, char C, int K) {
    int counter = 0;
    for (int i = 0; i < strlen(string); ++i) {
        if (tolower(string[i]) == tolower(C)) {
            counter++;
        }
    }
    if (counter == K) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int N, K;
    char string[101];
    char tmp[101];
    char C;
    int appears = 0;
    scanf("%d %d %c\n", &N, &K, &C);
    for (int i = 0; i < N; ++i) {
        fgets(string, sizeof(string), stdin);
        cleanString(string);
        if (containsChar(string, C, K)) {
            appears = 1;
            if (strlen(string) > strlen(tmp)) {
                strcpy(tmp, string);
            }
        }
    }
    printf("%s", tmp);
    if (appears == 0) {
        printf("NONE");
    }
    return 0;
}
