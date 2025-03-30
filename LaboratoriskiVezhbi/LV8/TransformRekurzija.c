#include <stdio.h>

int newNumber(int number) {
    if (number == 0) {
        return 0;
    }
    int digit = number % 10;
    if (digit % 2 == 0) {
        digit = 0;
    } else {
        digit -= 1;
    }
    return digit + 10 * newNumber(number / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Brojot e %d", newNumber(n));
    return 0;
}
