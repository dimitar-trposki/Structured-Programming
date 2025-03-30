#include <stdio.h>

int main() {
    int n, digit1, digit2, digit3, digit4, KOLEGA = 0, counter = 0;
    int difference = 0;
    scanf("%d", &n);
    digit1 = n % 10;
    digit2 = (n / 10) % 10;
    digit3 = (n / 100) % 10;
    digit4 = n / 1000;

    if (digit1 == 5) {
        KOLEGA += 6;
        counter++;
    } else
        KOLEGA += digit1;

    if (digit2 == 5) {
        KOLEGA += 6 * 10;
        counter++;
    } else
        KOLEGA += digit2 * 10;

    if (digit3 == 5) {
        KOLEGA += 6 * 100;
        counter++;
    } else
        KOLEGA += digit3 * 100;

    if (digit4 == 5) {
        KOLEGA += 6 * 1000;
        counter++;
    } else
        KOLEGA += digit4 * 1000;

    if (counter < 2) {
        printf("Error");
        return 0;
    }

    if (n > KOLEGA) {
        difference = n - KOLEGA;
        printf("%.4f%%", ((float) difference / n) * 100.0);
        return 0;
    } else if (n < KOLEGA) {
        difference = KOLEGA - n;
        printf("%.4f%%", ((float) difference / n) * 100.0);
        return 0;
    }
}
