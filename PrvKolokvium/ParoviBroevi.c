//
// Created by DimitarT on 8/17/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int z, a, b, counter = 0, sumCounter = 0;
    scanf("%d", &z);
    while (scanf("%d %d", &a, &b)) {
        if (a == 0 && b == 0) {
            break;
        }
        if (a + b == z) {
            counter++;
        }
        sumCounter++;
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", counter, z);
    printf("Procentot na parovi so zbir %d e %.2f%%", z, ((float) counter / sumCounter) * 100);
}
