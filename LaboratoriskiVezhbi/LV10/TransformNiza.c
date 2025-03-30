#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[101];
    char tmp[101];
    scanf("%s", string);
    int len = strlen(string);
    strcpy(tmp, string + len / 2);
    strncat(tmp, string, len / 2);
    strcpy(string, tmp);
    printf("%s", string);
    return 0;
}
