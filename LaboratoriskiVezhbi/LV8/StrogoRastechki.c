#include <stdio.h>

int isStAsc(int number) {
    if (number == 0) {
        return 1;
    }
    int lastDigit = number % 10;
    int secondToLastDigit = (number / 10) % 10;
    if (lastDigit < secondToLastDigit) {
        return -1;
    }
    return isStAsc(number / 10);
}

int sum(int number) {
    if (number == 0) {
        return 0;
    }
    int digit = number % 10;
    if (isStAsc(number)) {
        return digit + sum(number / 10);
    }
}

int main() {
    int n, numbers;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers);
        if (isStAsc(numbers) == 1) {
            printf("%d (suma: %d)\n", numbers, sum(numbers));
        }
    }
    return 0;
}
