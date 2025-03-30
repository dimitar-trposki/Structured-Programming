#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N < 100000) {
        for (int i = 1; i <= N; i++) {
            int number;
            scanf("%d", &number);
            int remainder = number % 5;
            switch (remainder) {
                case 0: printf("-----\n");
                    break;
                case 1: printf(".----\n");
                    break;
                case 2: printf("..---\n");
                    break;
                case 3: printf("...--\n");
                    break;
                case 4: printf("....-\n");
                    break;
            }
        }
    }
    return 0;
}
