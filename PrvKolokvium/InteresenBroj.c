//
// Created by DimitarT on 8/13/2023.
//
#include <stdio.h>

int daliInteresen(int number) {
    int newNumber = 0, tmp = 0, counter = 0;
    tmp = number;
    while (tmp) {
        counter++;
        newNumber = newNumber * 10 + tmp % 10;
        tmp /= 10;
    }
    if (newNumber % counter == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 9) {
        printf("Brojot ne e validen");
        return 0;
    }
    for (int i = n - 1; i > 0; --i) {
        if (daliInteresen(i)) {
            printf("%d", i);
            return 0;
        }
    }
}
