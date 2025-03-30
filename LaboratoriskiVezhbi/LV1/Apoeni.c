#include <stdio.h>

int main() {
    int sumaNaPari;
    scanf("%d", &sumaNaPari);
    printf("%d*5000\n", sumaNaPari / 5000);
    sumaNaPari %= 5000;
    printf("%d*1000\n", sumaNaPari / 1000);
    sumaNaPari %= 1000;
    printf("%d*500\n", sumaNaPari / 500);
    sumaNaPari %= 500;
    printf("%d*100\n", sumaNaPari / 100);
    sumaNaPari %= 100;
    printf("%d*50\n", sumaNaPari / 50);
    sumaNaPari %= 50;
    printf("%d*10\n", sumaNaPari / 10);
    sumaNaPari %= 10;
    printf("%d*5\n", sumaNaPari / 5);
    sumaNaPari %= 5;
    printf("%d*2\n", sumaNaPari / 2);
    sumaNaPari %= 2;
    printf("%d*1", sumaNaPari / 1);
    return 0;
}
