#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n >= 10) {
            int pom = n;
            int zigzag = 0;
            int ok = 1;
            while (pom > 0) {
                int cifra = pom % 10;
                pom /= 10;
                if (zigzag == 0) {
                    if (cifra >= 5) {
                    } else {
                        ok = 0;
                    }
                    zigzag = 1;
                } else if (zigzag == 1) {
                    if (cifra < 5) {
                    } else {
                        ok = 0;
                    }
                    zigzag = 0;
                }
            }
            pom = n;
            zigzag = 0;
            int ok2 = 1;
            while (pom > 0) {
                int cifra = pom % 10;
                pom /= 10;
                if (zigzag == 0) {
                    if (cifra < 5) {
                    } else {
                        ok2 = 0;
                    }
                    zigzag = 1;
                } else if (zigzag == 1) {
                    if (cifra >= 5) {
                    } else {
                        ok2 = 0;
                    }
                    zigzag = 0;
                }
            }

            if (ok == 1 || ok2 == 1) {
                printf("%d\n", n);
            }
        }
    }

    return 0;
}
