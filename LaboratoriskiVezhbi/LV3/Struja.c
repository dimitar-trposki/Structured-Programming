#include <stdio.h>

int main() {
    float kWh, smetka = 0;
    scanf("%f", &kWh);
    if (kWh <= 500) {
        smetka = kWh * 5;
    } else if (kWh > 500 && kWh <= 650) {
        smetka = (500 * 5) + ((kWh - 500) * 7.5);
    } else if (kWh > 650 && kWh <= 850) {
        smetka = (500 * 5) + (150 * 7.5) + ((kWh - 650) * 11);
    } else if (kWh > 850) {
        smetka = (500 * 5) + (150 * 7.5) + (200 * 11) + ((kWh - 850) * 13.5);
    }

    if (smetka < 7000) {
        printf("%.2f", smetka * 1.10);
    } else {
        printf("%.2f", smetka * 1.18);
    }
    return 0;
}
